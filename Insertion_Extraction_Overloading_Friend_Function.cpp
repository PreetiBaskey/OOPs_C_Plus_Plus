#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b; // Real and Imaginary parts
    public:
        // Setter function to initialize values manually
        void setData(int x, int y) {
            a = x;
            b = y;
        }

        // Standard display function
        void showData() {
            cout << "a : " << a << endl;
            cout << "b : " << b << endl;
        }

        /* 
           Friend functions allow non-member functions to access private data.
           We overload << (insertion) and >> (extraction) operators here.
        */
        friend ostream& operator<<(ostream&, Complex);
        friend istream& operator>>(istream&, Complex&);
};

// Overloading the << operator for 'cout << c1'
// We pass 'dout' by reference and 'C' by value (or const reference)
ostream& operator<<(ostream &dout, Complex C) {
    // We use 'dout' instead of 'cout' to maintain the stream chain
    dout << endl << "a : " << C.a << endl;
    dout << "b : " << C.b << endl;
    
    return dout; // Returning the stream allows cascading: cout << c1 << c2;
}

// Overloading the >> operator for 'cin >> c1'
// Note: 'C' must be passed by reference (&) so changes persist
istream& operator>>(istream &din, Complex &C) {
    // Input format expected: two integers separated by space
    din >> C.a >> C.b;
    
    return din; // Returning the stream allows cascading: cin >> c1 >> c2;
}

int main() {
    Complex c1;

    cout << "Enter a complex number (two integers) :- ";
    // Uses the overloaded >> operator
    cin >> c1; 

    cout << endl << "You entered :- ";
    // Uses the overloaded << operator
    cout << c1; 
    
    return 0;
}
