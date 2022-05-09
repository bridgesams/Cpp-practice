#include <iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    while(n>0||s>9)
    {
        if(n==0)
        {
        n=s;
        s=0;
        }
        s=s+n%10;
        n/=10;
    }
    if(s==1)
    cout<<"Magic";
    else
    cout<<"Not Magic";
    return 0;
}