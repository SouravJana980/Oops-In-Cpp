#include<iostream>
#include<string>
using namespace std;
class scooty{
    public:
   int topspeed;
   int milage;
};
class bike : protected scooty{
    public:
    int gear;
  void setmilage(int milage){
      this->milage = milage;
  }
  int getmilage(){
      return this->milage;
  }
};
int main(){
  bike b1;
    b1.setmilage(45);
    cout<<b1.getmilage();
}