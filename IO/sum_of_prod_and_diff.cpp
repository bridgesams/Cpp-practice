#include <iostream>
using namespace std;
int main()
{
    int n1,n2,sum,diff,prodofs_d;
    std::cout<<"Enter two Numbers: \n";
    std::cin>>n1>>n2;
    sum=n1+n2;
    diff=n1-n2;
    prodofs_d=sum*diff;
    std::cout<<"The product of the Sum and Difference of "<<n1<<" and "<<n2<<" is: "<<prodofs_d<<std::endl;
    return 0;
}
