#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    for(int i=11;i<=20;i++)
    {
        cout<<"Square of "<<i<<" is: "<<i*i<<endl;
        cout<<"Square Root of "<<i<<" is: "<<sqrt(i)<<endl;
        cout<<"Cube of "<<i<<" is: "<<i*i*i<<endl;
        cout<<"Cube Root of "<<i<<" is: "<<cbrt(i)<<endl;
        cout<<" "<<endl;
    }
}