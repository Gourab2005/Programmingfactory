// program to call nonparamiterised constructor using instance
#include<iostream>
using namespace std;

class instance{
    public:
    //nonparameterised constructor
    instance(){
        cout<<"nonparamiterised constructor is called using instance";
    }
    //parameterised constructor
    instance(int a , int b){
        cout<<"a is "<<a<<" and b is "<<b;
    }
}instancecalled;

int main(){
    return 0;
}