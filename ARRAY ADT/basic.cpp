#include <bits/stdc++.h>
using namespace std;

class myArray{
    public:
    int *ptr;
    int size;
    void printarray(){
        for(int i=0;i<size;i++){
            cout<<ptr[i]<<'\n';
        }
    }    
};

int main(){
    myArray arr;
    int temp;

    arr.size = 10;
    arr.ptr = new int(arr.size);
    for(int i=0;i<arr.size;i++){
        arr.ptr[i] = i;
    }
    cout<<'\n';
    arr.printarray();
    delete []arr.ptr;
    arr.ptr = NULL;
}