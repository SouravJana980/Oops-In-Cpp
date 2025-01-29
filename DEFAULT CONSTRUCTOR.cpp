#include<iostream>
#include<string>
using namespace std;
class India{
public:
string name;
int population;
India(string n,int p){
    name = n;
    population = p;
}
India(){
    
}
};
void states(India state){
  cout<<state.name<<" "<<state.population<<endl;
}
int main(){
  India state1("WB",90);
   India state2("UP",250);
    India state3;
    state3.name = "MP";
    state3.population = 50;
  states(state1);
  states(state2);
  states(state3);
}