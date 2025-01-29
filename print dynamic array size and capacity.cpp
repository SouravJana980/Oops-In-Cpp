// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
class Vector{
    public:
    int size;
    int capacity;
    int* arr;
    //default constructor
Vector(){
    size = 0;
    capacity = 1;
    arr = new int (1);
}
void add(int element){
    if(size == capacity){
        capacity*=2;
        int* arr2 = new int [capacity] ;
        for(int i=0;i<size;i++){
            arr2[i] = arr[i];
        }
        arr = arr2;
    }
    arr[size] = element;
    size++;
}
void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sixe(){
    cout<<"vector size is:"<<this->size<<" "<<"capacity size is:"<<this->capacity<<endl;
}
};

int main() {
    Vector v;
   
    v.add(3);
    v.print();
     v.sixe();
     v.add(6);
    v.print();
     v.sixe();
     v.add(9);
    v.print();
     v.sixe();
     v.add(12);
    v.print();
    return 0;
}