#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int x;
    vector<int> arr;
    vector<int> temp;
    int flag;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    copy(arr.begin(), arr.end(), back_inserter(temp));
    sort(temp.begin(), temp.end());
    cout << '\n';
    for (int i = 0; i < N; i++)
    {
        flag = arr[i];
        if (temp[N - 1] == flag)
        {
            cout << temp[N - 2] * temp[N - 3] << '\n';
        }
        else if (temp[N - 2] == flag)
        {
            cout << temp[N - 1] * temp[N - 3] << '\n';
        }
        else
            cout << temp[N - 1] * temp[N - 2] << '\n';
    }
}