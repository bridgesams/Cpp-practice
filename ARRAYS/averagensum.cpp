#include <iostream>

int main(){
    int sum=0;
    float avg;
    int arr[10];
    std::cout << "Enter the 10 elements: ";
    for( int i=0 ; i<10 ; i++){
    std::cin >> arr[i];
    sum = sum+arr[i];
    }
    avg = sum/10.0;
    std::cout<< "Sum: " << sum << " Average: " << avg;
    return 0;
}