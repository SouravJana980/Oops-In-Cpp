#include<iostream>
#include<string>
using namespace std;
class India{
public:
string name;
static int number;
static int mber(){
    return number;
}
};
int India::number = 45;
int main(){
 cout<<India::mber();
}