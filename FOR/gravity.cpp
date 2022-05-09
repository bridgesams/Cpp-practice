#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int g,h,i;
    for(h=-4;h<=10;h++)
    {
        if(h>0)
        {
        g=32.17*pow((4390.0/(4390.0+h)),2);
        cout<<g<<endl;
        }
        else if(h<=0)
        {
            g=32.17*((4390.0+h)/4390.0);
            cout<<g<<endl;
        }
    }
}
