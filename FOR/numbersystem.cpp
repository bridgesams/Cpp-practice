/*Dumbass way I'm sure but whatever*/
#include <iostream>
using namespace std;
int main()
{
    int i,n,first,second,first2,second2;
    for(i=10;i<=99;i++)
    {
        n=i;
        first=n%10;
        n/=10;
        second=n%10;
        if((first*second)!=12)
        continue;
        n=i;
        n+=36;
        first2=n%10;
        n/=10;
        second2=n%10;
        if(first==second2 && second==first2)
        cout<<i;
    }
    return 0;
}