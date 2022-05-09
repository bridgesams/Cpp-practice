#include <iostream>
#include <cstdio>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2;
    cin>>n1>>n2;
    string arr[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=n1;i<=n2;i++)
    {
        if(i<10 && i>0)
        {
            cout<<arr[i];
        }
        else if(i%2==0)
        cout<<"even";
        else
        cout<<"odd";
    }
    return 0;
}