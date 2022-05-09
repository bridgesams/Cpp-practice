#include <iostream>
using namespace std;
int main()
{
    int n,z,i;
    cout<<"Enter the Number and z times: "<<endl;
    cin>>n>>z;
    for(i=1;i<=z;i++)
    {
        cout<<n*i<<endl;
    }
    return 0;
}