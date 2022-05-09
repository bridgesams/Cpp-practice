#include <iostream>
using namespace std;
int main(){
    int arr[10];
    int sum=0;
    cout<<"Enter 10 elements:";
    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(arr[i]%2==0)
        sum=sum+arr[i];
    }
    cout<<"sum of even no's: "<<sum;
    return 0;
}