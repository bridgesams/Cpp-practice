/*Dumbass way I'm sure but whatever*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=10000;i>=625;i/=2)
    {
        if(i!=625)
        cout<<i<<",";
        else
        cout<<i;
    }
    return 0;
}