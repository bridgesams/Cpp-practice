#include <iostream>
int main()
{
    int n1,n2,sum,diff,prod;
    std::cout<<"Enter two Numbers: "<<std::endl;
    std::cin>>n1>>n2;
    sum=n1+n2;
    diff=n1-n2;
    prod=n1*n2;
    std::cout<<"The sum is: "<<sum<<", difference is: "<<diff<<", product is: "<<prod<<".\n";
}