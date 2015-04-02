#include <iostream>
#include "funcitontest.h"
using namespace std;

int width;
int height;
void setvalues(int a, int b);
int area();
int main()
{
    cout << " First Program " << endl;
    test obj1;
    obj1.setvalues(12,2);
    obj1.area();
    cout<<obj1.area()<<endl;
    cout<<"Square Area "<<obj1.squareArea(5)<<endl;

    cout << "Working in TempBranch2" << endl;

    setvalues(1,2);
    cout<<area();
    return 0;
}

void setvalues(int a, int b){
    width = a ;
    height= b;
}
int area(){
    return width * height;
}
