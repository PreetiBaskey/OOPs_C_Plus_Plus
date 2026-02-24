#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b; // Real part 'a' and Imaginary part 'b'
    public:
        // Function to initialize the complex number
        void setData(int x, int y) {
            a = x;
            b = y;
        }

        // Function to display the values
        void showData() {
            cout << "a : " << a << endl;
            cout << "b : " << b << endl;
        }

        // Declaration of friend function to overload the '+' operator
        // It takes two Complex objects as arguments
        friend Complex operator +(Complex, Complex);
};

// Definition of overloaded '+' operator
// Because it is a friend function, it can access private members 'a' and 'b'
Complex operator +(Complex X, Complex Y) {
    Complex temp;
    temp.a = X.a + Y.a; // Adding real parts
    temp.b = X.b + Y.b; // Adding imaginary parts
    
    return temp; // Returning the resulting Complex object
}

int main() {
    Complex c1, c2, c3;

    // Setting values for the first and second complex numbers
    c1.setData(3, 4);
    c2.setData(5, 6);
    
    // Using the overloaded '+' operator
    // This is equivalent to calling: c3 = operator+(c1, c2);
    c3 = c1 + c2; 
    
    // Displaying the result of the addition
    c3.showData();
    
    return 0;
}
