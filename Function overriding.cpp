// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class animal{
    public:
    void speak(){
        cout<<"hello"<<endl;
    }
};
class dog:public animal{
    public:
    void speak(){
        cout<<"i am dog"<<endl;
    }
};
int main() {
    dog d;
    d.speak();

    return 0;
}