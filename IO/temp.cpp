#include <iostream>
int main()
{
    double c,f;
    std::cout<<"Enter the degree in Celsius:"<<std::endl;
    std::cin>>c;
    f=((9/5.0)*c)+32;
    std::cout<<"The equivalent degree in farhenheit is:"<<f<<std::endl;
    return 0;
}