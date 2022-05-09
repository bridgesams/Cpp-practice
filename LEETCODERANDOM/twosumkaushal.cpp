#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        vector<int>::iterator it;
        int diff;
        for(int i=0;i<nums.size();i++){
            diff=target-nums[i];
            it=std::find(nums.begin(),nums.end(),diff);
            if(it!=nums.end()){
                out.push_back(i);
                out.push_back(it-nums.begin());
                break;
            }
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