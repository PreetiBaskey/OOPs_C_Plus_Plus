/*
  1. A weak_ptr is a container for a raw pointer.
  2. It is created as a copy of a shared_ptr.
  3. The existence or destruction of weak_ptr copies of a
     shared_ptr have no effect on the shared_ptr or its
     other copies.
  4. After all copies of a shared_ptr have been destroyed,
     all weak_ptr copies become empty.
  5. weak_ptr does not participate in reference count.
*/

#include<iostream>
#include<memory>

using namespace std;

int main() {
    
    shared_ptr<int> p1(new int(10));
    weak_ptr<int> p2 = p1;
    cout<<*p1<<" "<<*(p2.lock())<<endl;
    
    // p1.reset(); 
    p2.reset();
    cout<<p1.use_count()<<endl;
    cout<<p2.use_count()<<endl;
    
    return 0;
}
