#include<iostream>
#include<string>
using namespace std;
//hierarchical inheritance
class human{
  public:
  void print1(){
  cout<<"human eat chicken & frouts"<<endl;
  }
};
class monkey:public human{
    public:
    
};
class dog:public human{
   
};
int main(){
    monkey m;
    m.print1();
  dog d;
  d.print1();
  
    
}