#include <iostream>
using namespace std;
int main()
{
    int n,digit,f,s=0,temp;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        f=1;
        digit=n%10;
        for(int i=1;i<=digit;i++)
        f=f*i;
        s=s+f;
        n/=10;
    }
    if(s==temp)
    cout<<"Special";
    else
    cout<<"Not Special";
    return 0;
}