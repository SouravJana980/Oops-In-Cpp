#include<iostream>
#include<string>
using namespace std;
class animal{
    public:
  void print(){
      cout<<"monkey is an animal"<<endl;
  }  
};
class monkey:public animal{
    
};
class gay{
  public:
  void print1(){
  cout<<"gay is an human"<<endl;
  }
};
class lesbian{
  public:
  void print2(){
  cout<<"lesbian is an human"<<endl;
  }
};
class human:public gay,public lesbian,public animal{
  public:
  
};
//hybrid inheritance using multipel&hierachicel inheritance
int main(){
    monkey m;
    m.print();
    human h;
    h.print1();
    h.print2();
    h.print();
    return 0;
}