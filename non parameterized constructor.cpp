#include<iostream>
#include<string>
using namespace std;
//define class
class teacher{
    //access modifiers
    private:
     double salary;
    //access modifiers    
    public:  
    //non parameterized constructor
    teacher(){
        depertment = "cse";
    }     
    //this are entity of object 
    string name;
    string depertment;
    string subject;
   
    //method(function)
    void changdepartment(string newdepertment){
        depertment = newdepertment;
    }
    //setter
    void setsallary(double s){
        salary = s;
    }
    //getter 
    double getsallary(){
        return salary;
    }
};
int main(){
    //t1 is object
    teacher t1;
    //object and attributes define . operator
    t1.name =  "sourav";
    t1.subject = "oops";
    t1.setsallary(234000);
    cout<<t1.getsallary()<<endl;
    cout<<t1.depertment;
}