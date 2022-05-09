#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int pivot = 9;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= arr[pivot])
        {
            if (i != j)
                swap(arr[i, j]);
            j++;
        }
        pivot--;
    }
}