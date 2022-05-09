/*Dumbass way I'm sure but whatever*/
#include <iostream>
using namespace std;
int main()
{
    int i,h,n;
    cin>>n;
    h=n;
    for(i=1;i<=9;i++)
    {
        cin>>n;
        if(h<n)
        h=n;
    }
    cout<<h;
    return 0;
}