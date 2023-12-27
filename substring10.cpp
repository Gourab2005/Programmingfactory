// Longest substring that starts with X and ends with Y
#include<iostream>
#include<string>
using namespace std;

int Long_sub_X_Y(string str, char X, char Y){

    int N = str.length();
    int start= 0;
    int end= N-1;
    int xpos= 0;
    int ypos= 0;

    while (true)
    {
        if (str[start] == X)
        {
            xpos = start;
            break;
        }
        start++;
    }

    while (true)
    {
        if (str[end]==Y)
        {
            ypos= end;
            break;
        }
        end--;
    }

    int length = (ypos-xpos)+1;
    cout<<length<<endl<<str.substr(xpos,length);
    
}

int main(){

    string str = "ABCDEFGHIJKLZOPYTRHGFDTA";
    char X='A',Y='T';
    Long_sub_X_Y(str,X,Y);
    return 0;
}