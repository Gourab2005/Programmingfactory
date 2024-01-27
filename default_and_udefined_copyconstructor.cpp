// Implicit copy constructor Calling
/* 
#include<iostream>
using namespace std;

class number{
    int n;
    public:
        void assign(int x){
            n=x;
        }
    //printing the value of n
    void display(){
        cout<<"Value of n is "<<n<<endl;
    }
};

int main(){
    number obj;
    obj.assign(10);
    obj.display();
    //copy constructor call
    number obj1(obj);
    obj1.display();
}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Explicitly copy constructor Calling

#include<iostream>
using namespace std;

class number{
    int n;
    public:
    //value initialization
    int assign(int x){
        n=x;
    }
    //actual constructor
    number(){};
    number(const number& copy){
        n=copy.n;
    }
    // desplay function 
    void display(){
        cout<<" value of n is : "<<n<<endl;
    }
};

int main(){
    number obj;
    obj.assign(20);
    obj.display();
    //copy constructor 
    number obj1(obj);
    obj1.display();
}