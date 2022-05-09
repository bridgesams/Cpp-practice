#include <iostream>
using namespace std;
int main()
{
    int i,f,c=1,n;
    while(c==1)
    {
        f=0;
        cout<<"Enter the number: ";
        cin>>n;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            f++;
        }
        if(f==1)
        cout<<"It is a prime number."<<endl;
        else
        cout<<"It is not a prime number. "<<endl;
        cout<<"Enter 1 if you want to repeat or any other number to terminate"<<endl;
        cin>>c;
    }
    return 0;
}