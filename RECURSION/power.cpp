#include <bits/stdc++.h>
using namespace std;

int power(int n,int p){
    if(p!=0){
        return power(n,p-1)*n;
    }
    else
    return 1;
}
int main(){
    cout<<"Enter Number: ";
    int n,p;
    cin>>n;
    cout<<"Enter Power: ";
    cin>>p;
    cout<<power(n,p);
    return 0;
}