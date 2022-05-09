#include <iostream>
#include <math.h>
int main()
{
    int A,B,sum,prod,CS,CP;
    std::cout<<"Enter two numbers: "<<"\n";
    std::cin>>A>>B;
    sum=A+B;
    prod=A*B;
    CS=pow(sum,3);
    CP=pow(prod,3);
    std::cout<<"The cube of the sum of the numbers is: "<<CS<<" and the product is: "<<CP<<".";
    return 0;
}