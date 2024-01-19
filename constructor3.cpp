#include<iostream>
using namespace std;

//creating a class
class constructor{
    public:
    int a,b;
    //calling non-parameterised constructor
    constructor(){
        a=10;
        b=20;
    }
};


int main(){
 constructor cons;
 cout<<"vlue of a is : "<<cons.a<<"value of b is : "<<cons.b;
 return 0;
}