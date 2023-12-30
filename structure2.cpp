// To declare a variable that uses the structure, use the name of the structure as the data type of the variable:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// defining the structure
struct car
{
    string carname;
    int carnumber;
    int carprice;
};
int main(){
    car car1,car2;
    car1={"BMW",2005,650000};
    car2={"Nano",2005,100000};
    cout<<car1.carname<<" "<<car1.carnumber<<" "<<car1.carprice<<endl;
    cout<<car2.carname<<" "<<car2.carnumber<<" "<<car2.carprice<<endl;
}
