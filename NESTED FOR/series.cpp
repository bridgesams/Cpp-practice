#include <iostream>
using namespace std;
int main()
{
    int i,j,sum=0,c=1;
    for(i=1;i<20;i+=2)
    {
        if(c%2==0)
        sum-=i;
        else
        sum+=i;
        c++;
    }
    cout<<sum;
    return 0;
}