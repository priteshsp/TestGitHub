#include <iostream>
#include "funcitontest.h"
using namespace std;

int main()
{
    cout << "First Program" << endl;
    test obj1;
    obj1.setvalues(12,2);
    obj1.area();
    cout<<obj1.area();

    return 0;
}


