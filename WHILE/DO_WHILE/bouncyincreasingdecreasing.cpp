#include <iostream>
using namespace std;
int main()
{
    int n,digit,prev,c=0,c1;
    cin>>n;
    while(n!=0)
    {
        c++;
        digit=n%10;
        if(c!=1)
        {
            if(guess<prevguess)
            c1++;
            if(guess>prevguess)
            c1=1;
        }
        prev=digit;
    }
}