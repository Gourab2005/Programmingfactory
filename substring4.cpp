#include<iostream>
using namespace std;

// function for substring making
void extractsubstring(string str, int n){
    // loop for strting index
    for (int startingindex=0; startingindex<=n; startingindex++){
        // loop for length of subarray
        for (int length = 1; length <= n-startingindex; length++)
        {
            string substring= str.substr(startingindex,length);
            cout<<str.substr(startingindex,length)<<endl;
        }
        
    }
}
int main(){
    string str="Gourab";
    extractsubstring(str,str.length());
}
