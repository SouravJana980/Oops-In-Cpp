#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int roll;
    public:
    void setname(string name){
        this->name = name;
    }
    void getname(){
        cout<<this->name<<endl;
    }

     void setroll(int roll){
        this->roll = roll;
    }
    int getroll(){
        return this->roll;
    }
};
int main(){
    student s;
    s.setname("sourav");
    s.setroll(12);
    s.getname();
    cout<<s.getroll()<<endl;
    student s1;
    
}