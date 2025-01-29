// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
    public:
    int n;
void print(){
    cout<<"i am sourav"<<endl;
}
int print(int *n){
    cout<<"i am sourav"<<endl;
    return *n; 
}
};
int main() {
   A obj;
   obj.n = 3;
   obj.print();
   cout<<obj.print(&obj.n);
    return 0;
}