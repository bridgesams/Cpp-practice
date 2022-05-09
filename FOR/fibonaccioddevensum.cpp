#include <iostream>
using namespace std;
int main()
{
    int i,sumo=0,sume=0,a=0,b=1,c;
    for(i=1;i<=20;i++)
    {
        if(a%2==0)
        sume=sume+a;
        else
        sumo=sumo+a;
        c=a+b;
        a=b;
        b=c;
    }
    cout<<sume<<endl;
    cout<<sumo<<endl;
    return 0;
}