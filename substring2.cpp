// Get a Sub-String after a Character

#include<iostream>
using namespace std;
int main(){
    
    string str="Dog:Cat";
    int position=str.find(":");
    string substring=str.substr(position+1);
    cout<<"After substring is : "<<substring;
}