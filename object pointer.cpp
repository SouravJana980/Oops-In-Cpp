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

void chang(crickter* c){
   
    (*c).name = "virat kohli";
}

int main() {
    crickter c1("virat",2500,55.01);
     //crickter c2("rohit",2300,52.01);
      cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
      chang(&c1);
       cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
      //chang(c2);
    return 0;
}