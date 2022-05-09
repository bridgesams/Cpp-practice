#include<iostream>
using namespace std;
int main()
{
    int i,a[10],big=0,c;
    for(i=0;i<9;i++)
    {
        cin>>a[i];
        c=0;
        for(int j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            c++;
        }
        if(c==1 && big<a[i])
        big=a[i];
    }
    cout<<"Biggest Prime: "<<big;
    return 0;
}