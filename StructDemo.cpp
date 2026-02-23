//The only difference between structure and class is that:
//the members of structure are by default public and
//the members of class are by default private

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
    
    Complex c1; //here c1 is called as variable of Complex
    c1.setData(10, 20);
    c1.showData();
    
    return 0;
}
