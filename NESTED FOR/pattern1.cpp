#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i*j<10)
            cout<<i*j<<"  ";
            else
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
