#include<bits/stdc++.h>
using namespace std;

class Complex {
    private: 
        int a, b;
    public:
        Complex(int x, int y) {      //Parameterized Constructor
            cout<<"called for 2 arguments"<<endl;
            a = x;
            b = y;
        }
        Complex(int k) {      //Parameterized Constructor
            cout<<"called for 1 argument"<<endl;
            a = k;
        }
        Complex() {    //default Constructor with no body statement
            cout<<"called for no argument!"<<endl;
        }
};

int main() {
    
    Complex c1(3, 4); //Complex c1 = Complex(3, 4);
    Complex c2(6); //Complex c2 = 5;
    Complex c3;
    
    return 0;
}
