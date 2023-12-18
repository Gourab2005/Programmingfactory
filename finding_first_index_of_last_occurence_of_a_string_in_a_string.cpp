#include<iostream>
using namespace std;
void findlastoccurance(string str, string s){
    size_t found=str.rfind(s);
    if (found==string::npos)
    {
        cout<<"no string found inside the string";
    }
    else{
        cout<<"first index of last occurance of string is: "<<found;
    }
    
}
int main(){
    string sentence="I am Gourab Das";
    string word="Das";
    findlastoccurance(sentence,word);
}
