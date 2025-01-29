#include<iostream>
#include<string>
using namespace std;
class India{
public:
string name;
int population;
};
void states(India state){
  cout<<state.name<<" "<<state.population<<endl;
}
int main(){
  India state1;
  state1.name = "WB";
  state1.population = 100000000;
  India state2;
  state2.name = "MP";
  state2.population = 50000000;
  India state3;
  state3.name = "UP";
  state3.population = 250000000;
  states(state1);
  states(state2);
  states(state3);
}