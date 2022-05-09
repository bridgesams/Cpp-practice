#include <iostream>
using std::cin;
using std::cout;
int fun(int n){
    static int x = 0;
    if(n>0){
        return fun(n - 1) + ++x;
    }
    else
    return 0;
}
int main(){
    cout<<fun(5);
}