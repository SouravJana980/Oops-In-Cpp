#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int roll;
    public:
    string name;
    void setroll(int r){
        roll = r;
    }
    int getroll(){
        return roll;
    }
};
int main(){
    student *s = new student();
    (*s).name = "sourav";
    cout<<(*s).name<<endl;
    (*s).setroll(23);
    cout<<(*s).getroll();
}