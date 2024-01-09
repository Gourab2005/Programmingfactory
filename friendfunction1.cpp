// C++ program to create a global function as a friend function of some class
#include<bits/stdc++.h>
using namespace std;

class marks{
    private:
    int maths ;
    int physics;
    //declaring friend function
    friend void output(marks obj);
};

//defining the function to print the marks
void output(marks obj){
    obj.maths=20;
    obj.physics=30;
    cout<<"Maths = "<<obj.maths<<endl;
    cout<<"Physics = "<<obj.physics;
}

int main(){
    marks object;
    output(object);
}