#include <iostream>
using namespace std;
int main()
{
    int i,a[10],so=0,se=0;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        if(i%2==1 && a[i]%2==1)
        so+=a[i];
        else if(i%2==0 && a[i]%2==0)
        se+=a[i];
    }
    cout<<"Sum of odd: "<<so<<'\n';
    cout<<"Sum of even: "<<se;
}