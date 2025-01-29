// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    void getname(string name){
        cout<<this->name;
    }
     int getage(int age){
        return this->age;
    }
};
int main() {
    student s;
    
    // cout<<s.getname()<<endl;
    // cout<<s.getage();
    return 0;
}