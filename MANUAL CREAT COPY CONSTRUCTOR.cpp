#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll;
    student(string name,int roll){
        this->name = name;
        this->roll = roll;
    }//manule creat copy constructor
    student(student& s1){
        this->name = s1.name;
         this->roll = s1.roll;
    }
  void print(){
      cout<<name<<" "<<roll<<endl;
  }  
};
int main(){
    student s("sj",28);
    s.print();
  student s2(s);
   s2.print();
    
}