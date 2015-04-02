#ifndef FUNCITONTEST
#define FUNCITONTEST
#include<iostream>>

class test
{

private:
    int width, height;
public:
    void setvalues(int a, int b);
    int area();

};

void test::setvalues(int a,int b){
    width = a;
    height =b;

}

int test::area(){
return width*height;
}


#endif // FUNCITONTEST

