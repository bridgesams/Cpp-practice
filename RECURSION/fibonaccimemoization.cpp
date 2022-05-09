#include <bits/stdc++.h>

int F[100];
int fibonacci(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2]=fibonacci(n-2);
        if(F[n-1]==-1)
            F[n-1]=fibonacci(n-1);
        return F[n-1]+F[n-2];
    }
}

int main(){
    int n;
    std::cout<<"Enter value of n: ";
    std::cin>>n;
    std::fill_n(F,100,-1);
    std::cout<<fibonacci(n);
}