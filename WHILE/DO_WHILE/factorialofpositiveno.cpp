#include <iostream>
using namespace std;
int main()
{
    int f,i,c=1,n;
    while(c>0)
    {
        f=1;
        cout<<"Enter the number: ";
        cin>>n;
        cout<<endl;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        cout<<"The factorial is: "<<f<<endl;
        cout<<"Enter a positive number to continue or 0/negative number to terminate: ";
        cin>>c;
        cout<<endl;
    }
}