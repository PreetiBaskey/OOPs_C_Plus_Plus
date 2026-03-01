/*
  1. A unique_ptr is a contaner for a raw pointer.
  2. unique_ptr explicitly prevents copying of its
     contained pointer, but move() function can be
     used to transfer ownership of the contained
     pointer to another unique_ptr.
  3. No supprt of copy constructor and copy assignment
     operator.
  4. unique_ptr is a template.
*/

#include<iostream>
#include<memory>

using namespace std;

void f1() {
    unique_ptr<int> p1(new int(10));
    unique_ptr<int> p2;
    
    cout<<*p1<<endl;
    
    p2 = move(p1);
    if(p1 == nullptr) {
        cout<<"p1 is not an owner"<<endl;
    }
    else {
        cout<<*p1<<endl;
    }
    
    cout<<*p2;
}

int main() {
    
    f1();
    
    return 0;
}
