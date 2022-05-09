#include <iostream>
int main()
{
    int number;
    std::cin>>number;
    double discount,final;
    discount=500-0.125*500;
    final=number*discount;
    std::cout<<final;
    return 0;
}