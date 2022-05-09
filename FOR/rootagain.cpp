#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    for(int i=10;i<=20;i++)
    cout<<pow(i,1/(i+1.0))<<endl;
    return 0;
}