#include<iostream>
#include<string>
using namespace std;
class cricket{
    public:
    string name;
    int runs;
    float avg;
    cricket(string name,int runs,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }
    int match_NO(){
        return runs/avg;
    }
};
int main(){
cricket c1("virat",12345,60);
    cricket c2("kuldip",1234,18);
        cricket c3("rohit",1345,20);
        c1.print();
        cout<<"virat play matchess:"<<c1.match_NO()<<endl;
          c2.print();
          cout<<"kuldip play matchess:"<<c2.match_NO()<<endl;
            c3.print();
              cout<<"rohit play matchess:"<<c3.match_NO()<<endl;
}