#include <iostream>
using namespace std;
int main()
{
    int i,n,se=0,so=0,digit;
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        if(digit%2==0)
        se+=digit;
        else
        so+=digit;
        n/=10;
    }
    cout<<endl;
    cout<<"Sum of odd: "<<so<<endl;
    cout<<"Sum of even: "<<se;
    return 0;
}