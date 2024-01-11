// C++ program to create a member function of another class
// as a friend function

#include<iostream>
using namespace std;

//forword declaration
class mainclass; 

//declaring another class 
class anotherclass{
    public:
    void printtotalmarks(mainclass obj , int X , int Y, int Z, string name);
};

//declaring the main class 
class mainclass{
    private:
    int maths;
    int electrical;
    int physics;
    string stdname;
    //declaring the printnumber function as a friend function
    friend void anotherclass:: printtotalmarks(mainclass obj, int X ,int Y, int Z, string name); 
};

//function deeclaration
void anotherclass:: printtotalmarks(mainclass obj, int X ,int Y, int Z, string name){
    obj.maths =X;
    obj.electrical = Y;
    obj.physics = Z;
    obj.stdname = name;
    cout<<"Name = "<<obj.stdname<<" Total CA1 marks = "<< obj.maths + obj.electrical + obj.physics<<endl;
}

int main(){
    mainclass mainobject;
    anotherclass anotherclassobject;
    anotherclassobject.printtotalmarks(mainobject,24,23,25,"Gourab Das");
    anotherclassobject.printtotalmarks(mainobject,21,23,25, "Shibom Das");
    return 0;
}