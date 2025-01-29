#include<iostream>
#include<string>
using namespace std;
//define class
//class is user define data type
class teacher{//teacher is object
    //access modifiers    
    public:       
    //this are entity of object 
    string name;
    string depertment;
    string subject;
    double salary;
    //method(function)
    void changdepartment(string newdepertment){
        depertment = newdepertment;
    }
};
int main(){
    //t1 is object
    teacher t1;//t1 is the teacher type object
    //object and attributes define . operator
    t1.name =  "sourav";
    t1.depertment = "cse";
    t1.subject = "oops";
    t1.salary = 234000;
    cout<<t1.name<<endl;
}
