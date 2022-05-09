#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double series=0.0;
    for(int i=1,j=10;i<=10;i++,j--)
    {
        if(i%2==1)
        series=series+(i*1.0)/pow(j,0.5);
        else
        series=series+pow(i,0.5)/(1.0*j);
    }
    cout<<series;
    return 0;
}