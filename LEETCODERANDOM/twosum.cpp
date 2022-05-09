#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr;
    vector<int> temp;
    vector<int> indices;
    int flag, size, n, target, c = 0;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        arr.push_back(n);
    }
    copy(arr.begin(),arr.end(),back_inserter(temp));


    sort(temp.begin(), temp.end());
    cout << "\nEnter Target: ";
    cin >> target;

    for (int i = 0; i < size - 1; i++)
    {
        if (temp[i] > target || (temp[i] + temp[i + 1]) > target)
        {
            flag = i + 1;
            break;
        }
    }


    for (int i = 0; i < flag + 1; i++)
    {
        for (int j = 0; j < flag + 1; j++)
        {
            if (i != j)
            {
                if (temp[i] + temp[j] == target)
                {
                    indices.push_back(temp[i]);
                    indices.push_back(temp[j]);
                    c++;
                }
            }
        }
        if (c > 0)
            break;
    }
    c=0;
    for(int i=0;i<arr.size();i++){
        if(indices[c]==arr[i]){
        cout<<i<<' ';
        c++;
        }
    }
}