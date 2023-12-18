#include<iostream>
using namespace std;

void findoccurence(string str, string s, size_t p){

    size_t find = str.rfind(s,p); 
    
    if(find==string::npos){
        cout<<"word does not exit in the string";
    }
    else{
        cout<<find;
    }
}

int main(){
    string sentence="He and she , she and she is a team";
    string word="she";
    size_t position= 10;
    findoccurence(sentence,word,position);
}