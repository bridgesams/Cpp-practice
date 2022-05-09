#include <iostream>
using namespace std;
int main()
{
    int n,last,first,c=0;
    cin>>n;
    last=n%10;
    while(n!=0)
    {
        first=n%10;
        if(n<10)
        {
            if(first%2==0 && last%2==0)
            c=1;
        }
        n/=10;
    }
    if(c==1)
    cout<<"Both first and last digits are even.";
    else
    cout<<"Not even.";
}