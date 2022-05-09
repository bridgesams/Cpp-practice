#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number;
    double sq,cb;
    cout<<"Enter a Number: ";
    cin>>number;
    sq=sqrt(number);
    cb=pow(number,1/3.0);
    cout<<"The square root is: "<<sq<<" and the cube root is: "<<cb<<".";
}