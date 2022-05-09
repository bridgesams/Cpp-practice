#include <iostream>
using namespace std;
int main()
{
    int a[]{2,4,6,8,10};
    int *p=a;
    cout<<p<<endl;
    cout<<a<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;//*(a+i),i[a] same output
    }
    return 0;
}