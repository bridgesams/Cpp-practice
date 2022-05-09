#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int i,j;
    int size=sqrt(arr.size());
    int suml=0,sumr=0;
    for(i=0;i<size;i++){
        suml=suml+arr[i][i];
        sumr+=arr[i][size-1-i];
    }
    return abs(sumr-suml);
    // for(i=0;i<sqrt(arr.size());i++){
    // }
}

int main(){
    vector<vector<int>> vect
    {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };
    cout<<vect.size();
    cout<<diagonalDifference(vect);
}