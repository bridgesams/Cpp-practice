#include <iostream>
int main()
{
    int number,sq,cube;
    std::cout<<"Enter a Number: ";
    std::cin>>number;
    sq=number*number;
    cube=number*number*number;
    std::cout<<"The square is: "<<sq<<".";
    std::cout<<"The cube is: "<<cube<<".";
    return 0;
}