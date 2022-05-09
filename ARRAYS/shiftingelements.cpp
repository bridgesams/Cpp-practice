#include <iostream>
using namespace std;
int main()
{
    int a[10],temp;
    for(int i=0;i<10;i++)
    cin>>a[i];
    temp=a[9];
    for(int i=10;i>0;i--)
    a[i]=a[i-1];
    a[0]=temp;
    for(int i=0;i<10;i++)
    cout<<a[i]<<"\t";
    return 0;
}