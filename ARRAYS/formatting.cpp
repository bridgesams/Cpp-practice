#include<iostream>
using namespace std;
int main(void)
{
    int a[]={5,78,-5,0,12,-10,78,0,23,73,81,-91,0,0,15};
    cout<<"The positives are: ";
    for(int i=0;i<15;i++)
    {
        if(a[i]>0)
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    cout<<"The negatives are: ";
    for(int i=0;i<15;i++)
    {
        if(a[i]<0)
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"The zeroes are: ";
    for(int i=0;i<15;i++)
    {
        if(a[i]==0)
        cout<<0<<"["<<i<<"]"<<" ";
    }
}