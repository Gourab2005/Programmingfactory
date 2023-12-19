#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="I am Gourab Das";

    cout<<"The length of the string: "<<str.length()<<endl;

    // lets see the capacity of the tring
    cout<<"Capacity of the string is: "<<str.capacity()<<endl;

    // now resizing the length
    str.resize(10);
    cout<<"The string after resize: "<<str<<endl<<"and the length of the string is now: "<<str.length()<<endl;
    // lets resize it further
    str.resize(20);
    cout<<"length further after further reizing it is: "<<str.length()<<endl;
    cout<<"now capacity before shrinking: "<<str.capacity()<<endl;
    // lets shrink the capacity to the string
    str.shrink_to_fit();
    cout<<"capacity after shrinking: "<<str.capacity()<<endl; 

    
}