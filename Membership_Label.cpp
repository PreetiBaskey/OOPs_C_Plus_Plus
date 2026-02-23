#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b;
    public:
        void setData(int, int);
        void showData() {
            cout<<"a : "<<a<<endl;
            cout<<"b : "<<b<<endl;
        }
};
void Complex:: setData(int x, int y) {
    a = x;
    b = y;
}

int main() {
    Complex c1;
    c1.setData(2, 4);
    c1.showData();
    return 0;
}
