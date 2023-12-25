// Print the Minimum Value of all Substrings of a String Representing a Number
#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

void minsubstr(string str, size_t length){
    vector<int> v;
    for (size_t i = 0; i < length; i++)
    {
        for (size_t len = 1; len <= length-i; len++)
        {
            string sub= str.substr(i,len);
            int num= stoi(sub);
            v.push_back(num);
        }
        
    }
    cout<<"Minimum value among all substring is "<<*min_element(v.begin(), v.end());
}

int main(){
    string s= "1234";
    minsubstr(s,s.length());
    return 0;
}
