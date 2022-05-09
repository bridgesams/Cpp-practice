#include <iostream>
using namespace std;
int main()
{
    int i,j,c;
    double sum=0,a=1,b=1;
    for(i=1;i<=10;i++)
    {
        sum+=(a/b);
        a+=b;
        b+=a;
    }
    cout<<sum;
    return 0;
}