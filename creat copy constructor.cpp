#include<iostream>
using namespace std;
class teacher{
    public:
    string name;
    string sub;
    string dept;
   teacher(string name,string sub,string dept){
    this->name = name;
    this->sub = sub;
    this->dept = dept;
   }
    void getinfo(){
        cout<<name<<endl;
        cout<<sub<<endl;
        cout<<dept<<endl;
    }
};
int main(){
    teacher t1("sourav","cpp","cse");
    teacher t2(t1);
    t2.getinfo();
}