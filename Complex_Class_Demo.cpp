#include<bits/stdc++.h> // Includes all standard libraries
using namespace std;

// Define a class named 'Complex' to represent complex numbers
class Complex {
    private:
        int a, b; // Private data members: 'a' for real part, 'b' for imaginary part
        
    public:
        // Method to assign values to the private data members
        void setData(int x, int y) {
            a = x; 
            b = y;
        }

        // Method to display the values of the complex number
        void showData() {
            cout << "a : " << a << endl;
            cout << "b : " << b << endl;
        }

        // Method to add two Complex objects
        // It takes one Complex object 'c' as an argument
        Complex add(Complex c) {
            Complex temp; // Temporary object to store the result
            
            // 'a' and 'b' refer to the calling object (c1 in main)
            // 'c.a' and 'c.b' refer to the passed object (c2 in main)
            temp.a = a + c.a;
            temp.b = b + c.b;
            
            return temp; // Return the resulting object
        }
};

int main() {
    // Create three objects of the Complex class
    Complex c1, c2, c3;

    // Initialize c1 with real=3, imaginary=4
    c1.setData(3, 4);

    // Initialize c2 with real=5, imaginary=6
    c2.setData(5, 6);

    // Call 'add' on c1, passing c2 as the argument
    // The result is returned and stored in c3
    c3 = c1.add(c2);

    // Display the result of (c3) the addition
    c3.showData();
    
    return 0;
}
