#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        
    vector<int> temp;
    vector<int> indices;
    vector<int> out;
    int flag, c = 0;
    copy(arr.begin(),arr.end(),back_inserter(temp));
    sort(temp.begin(), temp.end());

    for (int i = 0; i < temp.size(); i++)
    {
        if(temp[i] + temp[i + 1]>target){
            flag=i+1;
            break;
        }
    }


    for (int i = 0; i < flag; i++)
    {
        for (int j = 0; j < flag; j++)
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
        out.push_back(i);
        c++;
        }
        if(c>indices.size()-1)
            break;
    }
    return out;
    }
};

int main(){
    Solution s;
    int n,x,target;
    vector<int> arr,out;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter target: ";
    cin>>target;
    out=s.twoSum(arr,target);
    for(int i=0;i<out.size();i++){
        cout<<out[i];
    }
}