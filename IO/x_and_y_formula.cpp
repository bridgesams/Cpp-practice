#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double x,res;
    cout<<"Enter the number of x:"<<endl;
    cin>>x;
    res=(pow(x,1/6.0)+pow(x,1/4.0)+pow(x,1/2.0)+10)/(pow(x,1/5.0)+pow(x,1/3.0)+x);
    cout<<res;
}