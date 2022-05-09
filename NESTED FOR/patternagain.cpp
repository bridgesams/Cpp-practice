#include <iostream>
using namespace std;
int main()
{
    int i,j,z=1,c;
    for(i=1,c=8;i<=5;i++,c--)
    {
        for(int k=1;k<z;k++)
        {
            cout<<" ";
        }
        z++;
        for(j=1;j<=1;j++)
        {
            cout<<i<<"-"<<c;
        }
        cout<<endl;
    }
    return 0;
}