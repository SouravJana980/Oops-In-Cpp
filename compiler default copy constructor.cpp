#include<iostream>
using namespace std;
class student{
    public:
    string name;
    float cgpa;
    void getinfo(string name,float cgpa){
        cout<<name;
        cout<<cgpa;
    }
};
int main(){
    student s1(string name,float cgpa);
   student s2(s1);
   //s2.getinfo(s1);
}