//C++ program to demonstrate protected access modifier
#include<iostream>
using namespace std;

class parantclass {
    protected: 
    int number;
};
//defining a childclass to access protected datamember

class childclass : public parantclass{
    public:
    void acccessingfunc(int x){
        number=x;
    }
    void printfunc(){
        cout<<" value of number datamember which is private is : "<<number;
    }
};

int main(){
    childclass obj;
    obj.acccessingfunc(20);
    obj.printfunc();
}