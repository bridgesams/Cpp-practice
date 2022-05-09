#include <iostream>
using namespace std;
int main()
{
    int n,digit,lol=0,temp;
    cin>>n;
    temp=n;
    for(int i=0;i<=9;i++)
    {
        n=temp;
        while(n!=0)
        {
            digit=n%10;
            if(digit==i)
            lol=lol*10+digit;
            n/=10;
        }
    }
    cout<<lol;
}