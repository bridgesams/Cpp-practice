#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<string> str;
    int n;
    cin>>n;
    string temp,tempstr;
    for(int i=0;i<n;i++){
        cin>>temp;
        str.push_back(temp);
    }
    temp=str[0];
    for(int i=1;i<n;i++){
        string out;
        tempstr=str[i];
        for(int j=0;j<temp.length();j++){
            if(temp[j]==tempstr[j]){
                out.push_back(temp[j]);
            }
            else
                break;
        }
        temp=out;
    } 
    cout<<temp;
}