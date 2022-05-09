#include <iostream>
#include <math.h>
int main()
{
    double a,b,c,s,area;
    std::cout<<"Enter the sides of triangle: "<<std::endl;
    std::cin>>a>>b>>c;
    s=(a+b+c)/2.0;
    area=54sqrt(s*(s-a)*(s-b)*(s-c));
    std::cout<<"The Area Of The Triangle is: "<<area<<std::endl;
    return 0;
}