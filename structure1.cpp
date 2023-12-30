// Assign data to members of a structure and print it (print car detail)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// making the structure
struct 
{
    string carname;
    int modelyear;
    int price;
}car1,car2;

int main(){
    // car1.carname ="TataNano";
    // car1.modelyear=2005;
    // car1.price=1,50000;
    // car2.carname="Thar";
    // car2.modelyear=2010;
    // car2.price=30,00000;
    car1 ={"Tatanano",2005,150000};
    car2 ={"Thar",2010,1000000};
    cout<<car1.carname<<" "<<car1.modelyear<<" "<<car1.price<<endl;
    cout<<car2.carname<<" "<<car2.modelyear<<" "<<car2.price;
}
