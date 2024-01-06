// C++ program to demonstrate public access modifier , printing area of a circle
#include<iostream>
using namespace std;

class circle{
    public://this is public access modifier
    double radius;
    //member function to calculate area of a circle
    double area(){
        return 3.14*radius*radius;
    }
};

int main(){
    circle obj;
    obj.radius = 2;
    cout<<obj.area()<<endl;
    return 0;
}