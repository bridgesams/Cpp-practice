#include <iostream>
using namespace std;
int main()
{
    int c=1,j,f=0;
    for(int i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<c;
            c++;
        }
        c=c-f;
        f++;
        cout<<endl;
    }
    return 0;
}