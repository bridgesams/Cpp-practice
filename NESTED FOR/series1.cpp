#include <iostream>
using namespace std;
int main()
{
    int i,j,c=1,sum=0;
    for(i=-1;i>=-20;i--)
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