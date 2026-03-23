#include<bits/stdc++.h>
using namespace std;

vector<vector<string>>group_anagram(vector<string>&strs){
    unordered_map<string, vector<string>>mp;
    for(string s: strs){
        string temp = s;
    //step 1: sort 
    sort(temp.begin() , temp.end());
    //step 2: map mein store karo
    mp[temp].push_back(s);
    }
    vector<vector<string>>result;
    for(auto it : mp){
        result.push_back(it.second);
    }
    return result;
}
int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = group_anagram(strs);

        //print output
    for(auto group : ans){
        for(string word : group){
            cout<<word<<" ";
        }
        cout<<endl;
    }
    return 0;
}