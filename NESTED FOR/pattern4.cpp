#include <iostream>
using namespace std;
int main()
{
    int z=4,c=1;
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=z;k++)
        {
            cout<<"   ";
        }
        z--;
        for(int j=1;j<=i;j++)
        {
            if(c<10)
            cout<<c<<"  ";
            else
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}