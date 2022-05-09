#include <iostream>
using namespace std;
int main()
{
    int i,a[20],big=0,small=0,bloc,sloc;
    for(i=0;i<20;i++)
    {
        cin>>a[i];
        if(big<a[i])
        {
            big=a[i];
            bloc=i;
        }
        if(small>a[i])
        {
            small=a[i];
            sloc=i;
        }
    }
    cout<<"Biggest number is "<<big<<" at the "<<bloc<<" index.";
    cout<<endl;
    cout<<"Smallest number is "<<small<<" at the "<<sloc<<" index.";
    return 0;
}