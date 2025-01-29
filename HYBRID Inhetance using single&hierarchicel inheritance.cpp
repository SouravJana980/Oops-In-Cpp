#include<iostream>
#include<string>
using namespace std;
class animal{
    public:
  void print(){
      cout<<"monkey is an animal"<<endl;
  }  
};
class human{
  public:
  void print1(){
  cout<<"human eat chicken & frouts"<<endl;
  }
};
class monkey:public human,public animal{
    public:
    
};
class dog:public human{
   
};
int main(){
    monkey m;
    m.print1();
     m.print();
  dog d;
  d.print1();
  
    
}