#include <iostream>
using namespace std;
int main()
{
    int c=1;
    for(int i=5;i>=1;i--)
    {
        for(int j=2;j<=i*2;j+=2)
        {
            if(c<10)
            cout<<c<<"  ";
            else
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}