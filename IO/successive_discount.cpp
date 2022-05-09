#include<iostream>
int main()
{
    std::cout<<"Enter the amount: "<<std::endl;
    double amount,discount,discount2,discount3;
    std::cin>>amount;
    discount=amount-0.4*amount;
    discount2=discount-0.4*discount;
    discount3=discount2-0.2*discount2;
    std::cout<<"The payable amount after discount is:"<<discount3;
    return 0;
}