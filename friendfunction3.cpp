// C++ Program to demonstrate  how friend functions work as a bridge between the classes
//(compare which is greater b/w two given number)
#include <iostream>
#include <bits/c++io.h>
using namespace std;
//forword declaration
class abc;
class xyz{
    int num1; // private data member
    public:
    void set_val(int X){
        num1=X;
    }
    friend void compare(xyz n1,abc n2);
};

class abc{
    int num2; // private data member
    public: 
    void set_val(int Y){
        num2=Y;
    }
    friend void compare(xyz n1,abc n2);
};

void compare(xyz n1,abc n2){
    if (n1.num1>n2.num2)
    {
        cout<<n1.num1;
    }
    else{
        cout<<n2.num2;
    }
    
}
int main(){
    xyz obj1;
    abc obj2;
    obj1.set_val(90);
    obj2.set_val(50);
    //calling friendfunction
    compare(obj1,obj2);
    return 0;
}