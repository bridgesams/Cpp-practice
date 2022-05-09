#include <iostream>
using namespace std;
int main()
{
    int i,a,b,c;
    a=0;
    b=1;

    for(i=1;i<=20;i++)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}