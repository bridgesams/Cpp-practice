#include <iostream>
using namespace std;
int main()
{
    int i,j,a[100],temp,n;
    cout<<"Enter size: ";
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int k=0;k<n;k++)
    cout<<a[k]<<'\t';
    return 0;
}