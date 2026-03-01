/*
  1. A shared_ptr is a container for a raw pointer.
  2. It maintains reference counting ownership of its
     contained pointer in cooperation with all copies of
     the shared_ptr.
  3. An object referenced by the contained raw pointer will
     be destroyed when and only when all copies of the
     shared_ptr have been destroyed.
*/

#include<iostream>
#include<memory>

using namespace std;

int main() {
    
    shared_ptr<int>p1(new int(10));
    shared_ptr<int>p2;
    
    p2 = p1;
    cout<<p1.use_count()<<endl;
    cout<<p1.use_count()<<endl;
    
    cout<<p1.get()<<endl;
    cout<<p2.get()<<endl;
    
    p1.reset();
    cout<<p1.use_count()<<endl;
    cout<<p2.use_count()<<endl;
    
    cout<<p1.get()<<endl;
    cout<<p2.get()<<endl;
    
    return 0;
}



/*
  //Use case - Demo example
  #include<iostream>
  #include<memory>

  using namespace std;

  class Tyre {
    public:
      void doRepair() {}
  };

  class Car {
    private:
      shared_ptr<Tyre> wheel1;
    public:
      Car() {
        wheel1 = make_shared(new Tyre());
      }
      shared_ptr<Tyre> getWheel1() {
        return wheel1;
      }
  };

  int main() {

    Car car1;
    shared_ptr<Tyre> wheel1(car1.getWheel1());

    cout<<endl;

    return 0;
  }
*/
