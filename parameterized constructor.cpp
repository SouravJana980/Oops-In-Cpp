#include<iostream>
#include<string>
using namespace std;

class teacher{
   
    // double salary;
      public:  
   teacher(){
        depertment = "cse";
    } 
    //parameterized constructor
    teacher(string n,string d, string s){
        name = n;
        depertment = d;
        subject = s;
    }
    string name;
    string depertment;
    string subject;
    void getinfo(){
       cout<<name<<endl;
       cout<<subject;
   }
};
int main(){
   teacher t1("sourav","cse","cpp");
    
       t1.getinfo();
   
}