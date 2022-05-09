#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n>0)
        return sum(n-1)+n;
    else
        return n;
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<sum(n);
    return 0;
}