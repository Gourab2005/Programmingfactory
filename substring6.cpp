// Print the Maximum Value of all Substrings of a String Representing a Number
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void maxsubstr(string str, size_t length){
    vector<int> v;
    for (size_t i = 0; i < length; i++)
    {
        for (size_t len = 1; len <=        length-i ; len++)
        {
            string substring= str.substr(i,len);
            int x = stoi(substring);
            v.push_back(x);
        }
        
    }
    cout<<"maximum eliment of all substring of the string "<<str<<" is " << *max_element(v.begin(),v.end());
    
}
int main(){
    string s= "1234";
    maxsubstr(s, s.length());
    return 0;
}