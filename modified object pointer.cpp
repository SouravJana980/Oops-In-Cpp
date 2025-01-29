// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class crickter{
    public:
    string name;
    int runs;
    float avg;
    
crickter(string name,int runs,float avg){
    this->name = name;
    this->runs = runs;
    this->avg = avg;
}
};

void change(crickter* c){
   
    (*c).name = "virat kohli";
}
void print(crickter c){
    cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
}

int main() {
    crickter c1("virat",2500,55.01);
     //crickter c2("rohit",2300,52.01);
      print(c1);
      change(&c1);
       print(c1);
      //chang(c2);
    return 0;
}