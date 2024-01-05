// program to call parameterised constructor using instance
#include<iostream>
using namespace std;

class instance{
    public:
    // default constructor
    instance(){
        cout<<"default constructor is called using instance";
    }
    //parameterised constructor
    instance(int a , int b){
        cout<<"a is "<<a<<" and b is "<<b;
    }
}instancecalled(2,4);

int main(){
    return 0;
}