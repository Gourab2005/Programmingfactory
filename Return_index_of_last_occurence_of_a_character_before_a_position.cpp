#include<iostream>
using namespace std;
void findoccurence(string str, char s, size_t position){
    size_t find=str.rfind(s, position);
    if (find==string::npos)
    {
        cout<<"Character is not present in the string";
    }
    else{
        cout<<"index of last ocurence of the character before the position s: "<<find;
    }
}
int main(){
    string sentence="I am Gourab Das";
    char ch= 'a';
    size_t position=11;
    findoccurence(sentence,ch,position);
}
