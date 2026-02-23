#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b;
    public:
        Complex(int x, int y) {
            a = x;
            b = y;
        }
        Complex(Complex &c) {
            cout<<"copy constructor is called!"<<endl;
            a = c.a;
            b = c.b;
        }
        void showData() {
            cout<<"a : "<<a<<endl;
            cout<<"b : "<<b<<endl;
        }
};

int main() {
    
    Complex c1(3, 4);
    Complex c2(c1);
    c2.showData();
    
    return 0;
}
