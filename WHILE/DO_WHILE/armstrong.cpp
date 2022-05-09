#include <iostream>
using namespace std;
int main()
{
    int i,n,s=0,digit,temp;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        digit=n%10;
        s=s+digit*digit*digit;
        n/=10;
    }
    if(s==temp)
    cout<<"Armstrong Number";
    else
    cout<<"Not Armstrong Number";
    return 0;
}