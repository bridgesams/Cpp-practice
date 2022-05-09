#include <iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    {
        if(a[i]==6)
        {
            for(;a[i]!=9||i>9;)
            i++;
        }
        if(a[i]!=9)
        sum+=a[i];
    }
    cout<<"Sum is:"<<sum;
}
