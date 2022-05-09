#include <iostream>
using namespace std;
int main()
{
    int n,r=0,temp;
    cin>>n;
    temp=n;
    while (n!=0)
    {
        r=r*10+n%10;
        n/=10;
    }
    if(temp==r)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}