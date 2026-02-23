#include<bits/stdc++.h>
using namespace std;

struct Complex {
    private:
        int a, b;
    public:
        void setData(int x, int y) {
            a = x;
            b = y;
        }
        void showData() {
            cout<<"a : "<<a<<endl;
            cout<<"b : "<<b<<endl;
        }
};

int main() {
    
    Complex c1;
    c1.setData(10, 20);
    c1.showData();
    
    return 0;
}
