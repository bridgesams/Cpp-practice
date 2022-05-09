#include <bits/stdc++.h>
using namespace std;

string lol(string s,string t){
    vector<string> str;
    vector<string> check;
    stringstream ss(s);
    string word;
    while(ss>>word){
        str.push_back(word);
    }
    stringstream ss(t);
    while(ss>>word){
        str.push_back(word);
    }

    for(int i=0,i<str.size()-1;i++){
        int j=0;
        while(str[i]!=check[j]){
            j++;
            
        }
    }
}


int main(){

}