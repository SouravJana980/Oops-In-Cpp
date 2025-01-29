#include<iostream>
#include<string>
using namespace std;
class dog{
  public:
  void dogprint(){
  cout<<"dog eat chicken"<<endl;
  }
};
class monkey{
    public:
    void monkeyprint(){
  cout<<"monkey eat frout"<<endl;
    }
};
//multiple inheritance
class human:public dog,public monkey{
   
};
int main(){
  human h;
   h.dogprint(); 
    h.monkeyprint();   
    
}