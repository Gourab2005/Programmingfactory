// Get a SubString Before a Character
#include<iostream>
using namespace std;
int main(){
    string str="Nobita:Dekisugi";
    int position=str.find(":");
    string substring=str.substr(0,position);
    cout<<"Sizuka will choose "<<substring;
}
