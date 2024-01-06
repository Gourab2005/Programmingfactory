// accessing private data member using setter and getter method
#include<iostream>
using namespace std;
class demo{
    private: // private access modifier
    int privateVar;
    public:
    // Setter method to set the value of privateVar
    void setprivatevar(int val){
        privateVar=val;
    }
    // Getter method to retrieve the value of privateVar
    int getprivateVar() const {
        return privateVar;
    }

};
int main(){
    demo obj;
    obj.setprivatevar(20);
    cout<<obj.getprivateVar()<<endl;
}
//n C++, the const qualifier in the member function declaration, as in int getPrivateVar() const, serves the purpose of indicating that the member function does not modify the state of the object. This is known as a const member function.