#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(i%2==0 && i%3==0)
        cout<<i<<endl;
    }
    return 0;
}
