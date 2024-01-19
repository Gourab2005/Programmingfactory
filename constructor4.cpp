// CPP program to illustrate
// parameterized constructors
#include<iostream>
using namespace std;

class getmarks{
    private:
    int num1,num2;
    public:
    //defining a parameterised constructor
    getmarks(int x1,int x2){
        num1=x1;
        num2=x2;
    }
    int getNUM1(){return num1;}
    int getNUM2(){return num2;}
};

int main(){
    //constructor call
    getmarks obj(10,20);
    cout<<endl<<obj.getNUM1()<<endl<<obj.getNUM2();
}