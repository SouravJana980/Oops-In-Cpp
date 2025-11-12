#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    char group;
    int roll;
    student(string name,char group,int roll){
        this->name = name;
        this->group = group;
        this->roll = roll;
    }
    student(){

    }
    student(student& a){
        this->name = a.name;
        this->group = a.group;
        this->roll = a.roll;
    }
    void print(){
        cout<<this->name<<endl;
         cout<<this->group<<endl;
         cout<<this->roll<<endl;
    }
    
};
int main(){
    student s("sourav",'A',12);
    student x(s);
    x.print();


}
