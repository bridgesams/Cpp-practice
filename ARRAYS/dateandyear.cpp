#include <iostream>
using namespace std;
int main()
{
    int n,j=1;
    cin>>n;
    int a[]={31,29,31,30,31,30,31,30,31,30,31,30};
    for(int i=0;i<12;i++)
    {
        if(n>a[i])
        {
            n=n-a[i];
            j++;
        }
    }
    cout<<n<<'/'<<j;
    return 0;
}