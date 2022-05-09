#include<iostream>
using namespace std;
int main()
{
    int i,c=0,b;
    for(i=1;i<=25;i++)
    {
        cin>>b;
        if(b>100)
        c++;
    }
    cout<<c;
    return 0;
}