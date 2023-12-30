// C++ program illustrating the implementation of union
#include <iostream>
using namespace std;
union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    MyUnion myUnion;

    myUnion.intValue = 42;
    cout << "Integer value: " << myUnion.intValue << std::endl;

    myUnion.floatValue = 3.14f;
    cout << "Replaced new Float value: " << myUnion.floatValue << std::endl;

    myUnion.charValue = 'A';
    cout << "Replaced new Char value: " << myUnion.charValue << std::endl;

    return 0;
}

