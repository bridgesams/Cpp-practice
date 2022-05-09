#include <iostream>
using namespace std;
int main()
{
    int n,i,c=0,sq;
    cin>>n;
    sq=n*n;
    while(n>0)
    {
        if(n%10!=sq%10)
        c++;
        n/=10;
        sq/=10;
    }
    if(c==0)
    cout<<"Automorphic number";
    else
    cout<<"Not Automorphic number";
}