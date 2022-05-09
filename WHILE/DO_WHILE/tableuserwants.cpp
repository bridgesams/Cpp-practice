#include <iostream>
using namespace std;
int main()
{
    int c=1,i,n;
    while(c==1)
    {
        cout<<"Enter Number: ";
        cin>>n;
        cout<<endl;
        for(i=1;i<=10;i++)
        {
            cout<<n<<" * "<<i<<": "<<n*i<<endl;
        }
        cout<<endl;
        cout<<"Enter 1 if you want to repeat or any other number to terminate: ";
        cin>>c;
        cout<<endl;
    }
    return 0;
}