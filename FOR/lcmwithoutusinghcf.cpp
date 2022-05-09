#include <iostream>
int main()
    {
        int n1,n2,i,lcm;
        std::cin>>n1>>n2;
        if(n1<n2)
        {
        for(i=n1*n2;i>=n1;i-=n1)
        {
            if(n1%i==0 && n2%i==0)
            lcm=i;
        }
        }
        else
        {
        for(i=n1*n2;i>=n2;i-=n2)
        {
            if(n1%i==0 && n2%i==0)
            lcm=i;
        }
        }
        std::cout<<lcm;
        return 0;
    }
