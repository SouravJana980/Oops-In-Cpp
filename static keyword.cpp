#include<iostream>
#include<string>
using namespace std;
class India{
public:
string name;
static int number;
};
int India::number = 45;
int main(){
 cout<<India::number;
}