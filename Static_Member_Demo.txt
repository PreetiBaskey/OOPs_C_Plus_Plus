#include<bits/stdc++.h>
using namespace std;

class Account {
    private:
        int balance;
        static float roi;
    public:
        static void setRoi(int b) {
            roi = b;
        }
        static void showRoi() {
            cout<<"Roi is :- "<<roi<<endl;
        }
};

float Account:: roi = 3.5f;

int main() {
    
    Account a1, a2;
    a1.setRoi(14.2f);
    
    Account::setRoi(26.8f);
    Account::showRoi();
    
    return 0;
}
