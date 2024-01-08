/// C++ Program to demonstrate the functioning of a friend class
#include<iostream>
using namespace std;

class normalclass{
    private:
    int number1;
    protected:
    int number2;

    // declaring friendclass
    friend class friendclass;
};
//friend clas deriving
class friendclass{
    public: 
    void display(normalclass obj){
        obj.number1=20;
        cout<<obj.number1;
    }
};

int main(){
    normalclass obj1;
    friendclass obj2;
    obj2.display(obj1);
}
