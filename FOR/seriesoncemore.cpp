#include <iostream>
#include <math.h>
using namespace std;
int main()
{
for(int i=1;i<=10;i++)
{
    if(i%2==1)
    cout<<pow(i,i)<<endl;
    else
    cout<<pow(i,1.0/i)<<endl;
}
}