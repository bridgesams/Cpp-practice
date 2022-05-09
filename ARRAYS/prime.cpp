#include <iostream>
using namespace std;
int main()
{
    int i,f,a[10];
    cout<<"Enter 10 numbers: ";
    for(i=0;i<9;i++)
    cin>>a[i];
    for(i=0;i<9;i++)
    {
        f=0;
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            f++;
        }
        if(f==2)
        cout<<a[i]<<" is a prime number.\n";
    }
}