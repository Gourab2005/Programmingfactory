// C++ program to print sum of all possible substring of a number represented as a string
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int subarraysum(string str){
    size_t length= str.length();
    vector<int> v;

    for (size_t i = 0; i < length; i++)
    {
        for (size_t len = 1; len <= length-i; len++)
        {
            string substring=str.substr(i , len);
            int arraytoint=stoi(substring);
            v.push_back(arraytoint);
        }
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    return sum;
}
int  main(){
    string str="1234";
    cout<<"Sum of all substing: "<<subarraysum(str);
    return 0;
}
