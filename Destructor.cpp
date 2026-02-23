#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int a, b;
    public:
        ~Complex() {
            cout<<"Destructor called!";
        }
};

void fun() {
    Complex c1;
}

int main() {

    fun();
    
    return 0;
}
