#include<iostream>
#include<string>
using namespace std;
class India{
public:
string name;
int population;
int gdb;
India(string n,int p){
    name = n;
    population = p;
}
India(string n,int p,int g){
    name = n;
    population = p;
    gdb = g;
}
};
void states(India state){
  cout<<state.name<<" "<<state.population<<endl;
}
void statess(India state){
  cout<<state.name<<" "<<state.population<<" "<<state.gdb<<endl;
}
int main(){
  India state1("WB",90);
   India state2("UP",250);
    India state3("MP",50,900);
    India state4("OD",60,500);

    //deep copy constructor
    India state5 = state4;

     //deep copy constructor
    India state6(state2);
    
  states(state1);
  states(state2);
  statess(state3);
  statess(state4);
   statess(state5);
   states(state6);
}