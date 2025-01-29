#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll;
     student(string name,int roll,float marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
     void getmarks(){
        cout<<marks<<endl;
    }
   void print(){
        cout<<name<<" "<<roll<<" "<<marks<<endl;
    }
    void setmarks(float marks){
      this->marks = marks;
    }
    
    float marks;
    student(){
        
    }
    
   
};
int main(){
    student s1("sourav jana",42,19.03);
    s1.getmarks();
    s1.print();
    s1.setmarks(28.09);
    s1.getmarks();
}