#include <iostream>

using namespace std;

int width;
int height;
void setvalues(int a, int b);
int area();
int main()
{
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
