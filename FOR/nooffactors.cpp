#include <iostream>
using namespace std;
int main()
{
    int c=1,n,i;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        ++c;
    }
    cout<<"Count is: "<<c;
    return 0;
}