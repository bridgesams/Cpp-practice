#include <iostream>
using namespace std;
struct array {
    int A[10];
    int length;
};
// void display(struct array arr){
//     cout<<"\nARRAY:\n";
//     for(int i=0;i<arr.length;i++)
//     {
//         cout<<arr.A[i]<<"  ";
//     }
// }
int Reverse(struct array arr){
    int *B,i,j;
    B=new int[arr.length];
    for(i=arr.length-1,j=0;i>=0 && j<arr.length;i--,j++)
    {
        B[j]=arr.A[i];
    }
    for(i=0;i<arr.length;i++)
    {
        arr.A[i]=B[i];
    }
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
int main()
{
    struct array A={{10,20,30,40,50,60,65},7};
    cout<<Reverse(A);

    return 0;
}