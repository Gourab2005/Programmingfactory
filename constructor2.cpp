// Example: defining the constructor within the class
#include <iostream>
#include<string>
using namespace std;

// declaring an class
class student{
    string stdname;
    int uni_number;
    int dob;

    public:
    student(){
        cout<<"Enter the student name: ";
        getline(cin,stdname);
        cout<<"Enter your university roll: ";
        cin>>uni_number;
        cout<<"Enter the date_of_birth: ";
        cin>>dob;
    }
    
    void display(){
        cout<<endl<<"Your login userid is "<<uni_number<<endl;
        cout<<"Your login password is "<<dob<<endl;
    }
};

int main(){
    student s;// When object is created then constructor is automatically called
    s.display();
    return 0;
}