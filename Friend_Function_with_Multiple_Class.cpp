#include<bits/stdc++.h>
using namespace std;

// Forward declaration of class B to let class A know it exists [1]
class B;

class A {
    private:
        int a;
    public:
        // Setter function to assign a value to private member 'a' [2]
        void setData(int x) {
            a = x;
        }
        // Declaring 'fun' as a friend to grant access to private member 'a' [3]
        friend void fun(A, B);
};

class B {
    private:
        int b;
    public:
        // Setter function to assign a value to private member 'b' [2]
        void setData(int y) {
            b = y;
        }
        // Declaring 'fun' as a friend to grant access to private member 'b' [3]
        friend void fun(A, B);
};

// Friend function definition that accesses private data from both classes [3, 4]
void fun(A o1, B o2) {
    cout << "Sum is :- " << o1.a + o2.b;
}

int main() {
    // Create objects of class A and class B
    A obj1;
    B obj2;
    
    // Initialize data using member functions
    obj1.setData(2);
    obj2.setData(3);
    
    // Call the non-member friend function to perform the addition [4]
    fun(obj1, obj2);
    
    return 0;
}
