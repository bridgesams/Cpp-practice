#include <iostream>
using namespace std;
int main()
{
    int z=0,c=1;
    for(int i=9;i>=1;i-=2)
    {
        for(int k=0;k<z;k++)
        {
            cout<<"  ";
        }
        z++;
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            if(c==5)
            c=0;
            c++;
        }
        cout<<endl;
    }
    return 0;
}
