#include <iostream>
using namespace std;
int main()
{
    int i,a[10],temp,r,b[10];
    for(i=0;i<10;i++)
    {
        r=0;
        cin>>a[i];
        temp=a[i];
        while(temp!=0)
        {
            r=r*10+temp%10;
            temp/=10;
        }
        b[i]=r;
    }
    cout<<"Reverse: ";
    for(int j=0;j<10;j++)
    {
        cout<<b[j]<<'\n';
    }
    return 0;
}