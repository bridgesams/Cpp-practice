#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,temp,digit,f=0,prod1,prod2;
    cin>>temp;
    prod1=temp*2;
    prod2=temp*3;
    string s1 = to_string(temp);
    string s2 = to_string(prod1);
    string s3 = to_string(prod2);
    string s = s1 + s2 + s3;
    temp=stoi(s);
    for(int i=1;i<=9;i++)
    {
        n=temp;
        int c=0;
        while(n!=0)
        {
            digit=n%10;
            if(digit==i)
            c++;
            n/=10;
        }
        if(c!=1)
        {
            f=1;
            cout<<"No";
            break;
        }
    }
    if(f==0)
    cout<<"Yes";
    return 0;
}