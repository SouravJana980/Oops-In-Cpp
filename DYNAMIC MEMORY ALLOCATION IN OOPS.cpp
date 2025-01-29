// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class car{
    public:
    string name;
    int price;
    car(string name,int price){
        this->name = name;
        this->price = price;
    }
};
void print(car* c){
    cout<<c->name<<c->price<<endl;
}

int main() {
    car* c1 = new car("scoda",1234560);
    print(c1);

    return 0;
}