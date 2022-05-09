#include <iostream>
using namespace std;
int main()
{
    int i,n,first,second,third;
    for(i=100;i<=999;i++)
    {
        n=i;
        third=n%10;
        n=n/10;
        second=n%10;
        n/=10;
        first=n%10;
        if(first%2==1 && second%5==0 && third%2==0)
        cout<<i<<endl;
    }
    return 0;
}