#include<iostream>
#include<string>
using namespace std;
class sixwheeler{
    public:
   int topspeed;
   int milage;
   int gear;
};
class truck : public sixwheeler{
    public:
    int getnumber;
};
class bus : public truck{
    public:
    int capacity;
};
class car : public bus{
    public:
    int sunroof;
    car(int topspeed,int milage,int gear,int getnumber,int capacity,int sunroof){
        this->topspeed = topspeed;
        this->milage = milage;
        this->gear = gear;
        this->getnumber = getnumber;
        this->capacity = capacity;
        this->sunroof = sunroof;
    }
    void print(){
        cout<<topspeed<<" "<<milage<<" "<<gear<<" "<<getnumber<<" "<<capacity<<" "<<sunroof<<" "<<endl;
    }
};
int main(){
    
    car c1(189,18,6,5,7,1);
    c1.print();
}