//accessing private data member using public member function
#include<iostream>
using namespace std;
class circle{
    private:
    double radius;

    public: 
    double area(double r){
        //accessing private datamember using member function
        radius=r;
        cout<<"area is "<<3.14*radius*radius;
    }

};
int main(){
    circle obj;
    obj.area(2);
    return 0;
}