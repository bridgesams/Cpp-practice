#include <iostream>
using namespace std;
int main()
{
    int i=0,c,a[10],n;
    while(i!=10)
    {
        cin>>n;
        c=0;
        for(int j=1;j<n;j++)
        {
            if(n%j==0)
            c++;
        }
        if(c==1)
        {
            a[i]=n;
            i++;
        }
    }
    cout<<"First 10 Prime: ";
    for(int j=0;j<10;j++)
    cout<<a[j]<<'\n';
}