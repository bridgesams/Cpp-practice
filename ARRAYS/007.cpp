#include <iostream>
using namespace std;
int main()
{
    int a[10],i,j=0,c=0;
    int b[]={0,0,7};
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    {
        if(a[i]==b[j])
        {
            j++;
            if(j>2)
            {
                c++;
                break;
            }
        }
    }
    if(c==1)
    cout<<"Found!";
    else
    cout<<"No James Bond for you :(";
    return 0;
}