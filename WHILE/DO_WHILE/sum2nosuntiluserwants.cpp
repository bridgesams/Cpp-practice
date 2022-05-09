#include <iostream>
using namespace std;
int main()
{
    int choice=1,a,b,sum;
    while(choice==1)
    {
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Enter 1 if you want to repeat or any other number to stop: ";
    cin>>choice;
    }
    return 0;
}