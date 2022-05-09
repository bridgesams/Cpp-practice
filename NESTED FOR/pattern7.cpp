#include <iostream>
using namespace std;
int main()
{
    int c=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(j==c)
            cout<<0;
            else
            cout<<1;
        }
        c++;
        cout<<endl;
    }
}