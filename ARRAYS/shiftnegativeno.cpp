#include <iostream>
using namespace std;
int main()
{
    int a[10],i,j=0;
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    {
        if(a[i]>=0)
        {
            if(i!=j)
            swap(a[i],a[j]);
            j++;
        }
    }
    for(i=0;i<10;i++)
        cout<<a[i]<<'\t';
}