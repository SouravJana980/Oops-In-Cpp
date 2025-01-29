#include<iostream>
#include<string>
using namespace std;
class scooty{
    public:
   int topspeed;
   int milage;
};
class bike : public scooty{
    public:
    int gear;
    bike(int topspeed,int milage,int gear){
        this->topspeed = topspeed;
         this->milage = milage;
          this->gear = gear;
    }
    void print(){
        cout<<topspeed<<" "<<milage<<" "<<gear<<endl;
    }
};
int main(){
    bike b1(180,45,6);
    
    b1.print();
}