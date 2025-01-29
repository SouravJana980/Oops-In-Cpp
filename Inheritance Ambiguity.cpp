// INHERITANCE AMBIGUITY
#include <iostream>
using namespace std;
class A{
  public:
  void print(){
      
      cout<<"print class A"<<endl;
  }  
};
class B{
    public:
  void print(){
      cout<<"print class B"<<endl;
  }  
};
class C:public A,public B{
   
};
int main() {
    C c;
    c.A::print();
    c.B::print();
     c.A::print();
    return 0;
}