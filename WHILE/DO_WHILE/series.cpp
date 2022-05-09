#include <iostream>
using namespace std;
int main()
{
    int i,s,c=10,temp;
    for(i=1;i<=20;i++)
    {
        s=0;
        cout<<c<<'\n';
        temp=c;
        while(temp!=0)
        {
            s=s+temp%10;
            temp/=10;
        }
        c+=s;
    }
    return 0;
}