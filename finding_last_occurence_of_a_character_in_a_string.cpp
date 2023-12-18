// finding last index of exitance for a character in a string
#include<iostream>
using namespace std;

void findlastexistance(string str , char ch){
    size_t find= str.rfind(ch);
    if (find==string::npos)
    {
        cout<<"character i not present in the given string";
    }
    else{
        cout<<"The last index where the given character exists is: "<<find;
    }
    
}
int main(){
    string str("I am Gourab Das");
    char ch='a';
    findlastexistance(str,ch);
}