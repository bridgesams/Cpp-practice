#include <iostream>
using namespace std;
int main(void)
{
int i,a[15],b[15];
for(i=0;i<15;i++)
{
    cin>>a[i];
    b[14-i]=a[i];
}
cout<<"After reversing: ";
for(i=0;i<15;i++)
{
    cout<<b[i]<<" ";
}
}