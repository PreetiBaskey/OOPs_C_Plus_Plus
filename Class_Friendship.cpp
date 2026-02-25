#include<bits/stdc++.h>
using namespace std;

// Forward declaration of B so Class A's member functions can reference it
class B;

class A {
    public:
        // These functions now take an object of B to demonstrate access
        void fun(B &obj);
        void foo(B &obj);
};

class B {
    private:
        int secretCode = 777;

    // By declaring the whole class as a friend, we don't need to list functions individually
    friend class A;
    
    // friend void A :: fun();
    // friend void A :: foo();
};

// Definition of A's functions must come after B is fully defined
void A::fun(B &obj) {
    cout << "A::fun() accessing private member: " << obj.secretCode << endl;
}

void A::foo(B &obj) {
    obj.secretCode = 999; // Modifying the private member
    cout << "A::foo() has updated the secretCode to: " << obj.secretCode << endl;
}

void fun() {
    cout << "I am a global function." << endl;
}

int main() {
    A a_obj;
    B b_obj;

    // Demo of Class A accessing Class B's private data
    a_obj.fun(b_obj);
    a_obj.foo(b_obj);
    
    // Calling the global function
    fun();
    
    return 0;
}
