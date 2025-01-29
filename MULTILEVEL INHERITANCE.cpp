#include<iostream>
#include<string>
using namespace std;
class animal{
   
};
class dog : public animal{
    public:
    int weight;
    int age;
};
class germansepard : public dog{
    public:
    int power;
};
class localdog : public germansepard{
    public:
    int color;
    void setage(int age){
        this->age = age;
    }
    int getage(){
        return age;
    }
};
int main(){
    localdog d;
    d.setage(11);
    cout<<d.getage()<<endl;
    d.setage(10);
     cout<<d.getage()<<endl;
    
}