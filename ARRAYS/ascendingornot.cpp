#include <iostream>
using namespace std;
int main()
{
    int i,a[10],c=0;
    cout<<"Enter 10 numbers: ";
    for(i=0;i<10;i++)
    cin>>a[i];

    for(i=0;i<9;i++)
    {
        if(a[i]>a[i+1])
        c++;
    }
    if(c==0)
    cout<<"It's in ascending order.";
    else
    cout<<"It's not in ascending order.";
    return 0;
}