// C++ program to demonstrate accessing of data members 
#include<iostream>
using namespace std;
// declaring the class
class studentdata{
    // access specifier
    public: string student_name;
            void printname(){
                cout<<"Student name is "<<student_name;
            }
};
int main(){
    studentdata object;
    object.student_name = "Gourab Das";
    object.printname();
}