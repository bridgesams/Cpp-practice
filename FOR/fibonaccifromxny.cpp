#include <iostream>
using namespace std;
int main()
{
    int x,y,c,i;
    cin>>x>>y;
    for(i=1;i<=20;i++)
    {
        cout<<x<<endl;
        c=x+y;
        x=y;
        y=c;
    }
    return 0;
}