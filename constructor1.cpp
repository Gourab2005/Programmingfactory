// C++ program to demonstrate default and parameterized constructors
#include<iostream>
using namespace std;

// defining a class
class student_id {

    public:
    int stdid;
    // defining a default constructor
    student_id(){
        cout<<"Default constructor is used"<<endl;
        stdid=123456;
    }
    // defining a parameterized constructor
    student_id(int X){
        cout<<"Parameterized constructor is used"<<endl;
        stdid=X;
    }
};


int main(){
    // calling default constructor
    student_id obj1;
    cout<<"student id is "<<obj1.stdid<<endl;
    // calling parameteised constructor
    student_id obj2(12345);
    cout<<"student id is "<<obj2.stdid<<endl;
    
    return 0;

}