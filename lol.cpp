#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout << "Enter:";
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    int L[N / 2];
    for (int i = 0, j = 0; i < N; i += 2, j++)
    {
        L[j] = abs(arr[i] - arr[i + 1]);
    }
    sort(L, L + N / 2);
    cout << L[N / 2 - 1];
}
