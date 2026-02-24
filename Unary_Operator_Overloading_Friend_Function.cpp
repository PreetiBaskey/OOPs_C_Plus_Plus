#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b;
    public:
        // Sets the real (a) and imaginary (b) parts
        void setData(int x, int y) {
            a = x;
            b = y;
        }

        // Displays the current state of the object
        void showData() {
            cout << "a : " << a << endl;
            cout << "b : " << b << endl;
        }

        // Friend function declaration for overloading the unary minus operator
        // It takes one object as an argument and returns a new negated object
        friend Complex operator-(Complex);
};

// Definition of the overloaded unary '-' operator
Complex operator-(Complex X) {
    Complex temp;
    temp.a = -X.a; // Negating the real part
    temp.b = -X.b; // Negating the imaginary part
    
    return temp; // Returning the newly created negative complex number
}

int main() {
    Complex c1, c2;

    // Initialise c1 with positive values
    c1.setData(3, 4);
    cout << "Original Data:" << endl;
    c1.showData();
    
    // Applying the unary minus operator
    // The compiler transforms '-c1' into 'operator-(c1)'
    c2 = -c1; 
    
    cout << "Negated Data:" << endl;
    c2.showData();
    
    return 0;
}
