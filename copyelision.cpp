// C++ program to demonstrate the working of copy elision
#include<iostream>
using namespace std;

class name{
    public:
    void print(){
        cout<<"Elision "<<endl; 
    }
};

int main(){
    name el;
    for(size_t i=0;i<3;i++){
        el.print();
    }
    return 0;
}
