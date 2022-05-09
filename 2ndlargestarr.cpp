#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int first = arr[0];
    int second = -1;
    for (int i = 1; i < 5; i++)
    {
        if (first < arr[i])
            first = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != first)
        {
            if (second == -1)
                second = arr[i];
            else if (second < arr[i])
                second = arr[i];
        }
    }
    if (first != second)
        cout << second;
    else
        cout << "No 2nd largest here";
}