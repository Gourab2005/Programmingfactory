// defining member function outside of the class 
#include <iostream>
using namespace std;

class studentname{
    public:
    string sname;
    void printname();
};
void studentname::printname(){
    cout<<sname;
}
int main(){
    studentname object;
    object.sname = "Gourab";
    object.printname();
    return 0;
}