#include <iostream>
using namespace std;
int main()
{
    int a[10],c=0,n;
    while(c!=10)
    {
        cin>>n;
        if(n%2==0)
        {
            a[c]=n;
            c++;
        }
    }
    cout<<"First 10 even were: ";
    for(int i=0;i<10;i++)
    cout<<a[i]<<'\n';
    return 0;
}