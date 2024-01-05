// C++ program to explain destructors 
#include<iostream>
using namespace std;

class destructorcall{
    public:
    int id;

    // defining a destructor
    ~destructorcall(){
        cout<<"destructor is called at : "<<id<<endl;
    }
};

int main(){

    destructorcall obj1;
    obj1.id = 10;

    int i=0;
    while (i<5)
    {
        destructorcall obj2;
        obj2.id=i;
        i++;
    }//destructor called for obj2

    return 0;   
}//destructor called for obj1