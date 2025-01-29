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
    t1.depertment = "cse";
    t1.subject = "oops";
    t1.setsallary(234000);
    cout<<t1.getsallary();
}