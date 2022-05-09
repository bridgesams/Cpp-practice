#include <iostream>
using namespace std;
int main()
{
    int ce=0,co=0,cz=0,i,digit,n;
    for(i=1000;i<=3000;i++)
    {
        n=i;
        while(n!=0)
        {
            digit=n%10;
            n/=10;
            if(digit == 0)
            {
                cz++;
                continue;
            }
            else if(digit%2==0)
            ce++;
            else if(digit%2==1)
            co++;
        }
    }
    cout<<co<<','<<ce<<','<<cz;
    return 0;
}
