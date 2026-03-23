#include<bits/stdc++.h>
using namespace std;

vector<int> find_missing_and_repeating_2D(vector<vector<int>> &grid){
    
    unordered_map<int,int> freq;
    int missing = -1; int repeating = -1;

    int n = 0; 
    for(auto &row : grid){
        n += row.size();
        for(int num : row){
            freq[num]++;
        }
    }
    // find missing and repeating
    for(int i = 1 ; i<=n ; i++){
        if(freq[i] == 0) missing = i;
        if(freq[i] > 1)repeating = i;
    }
    return{missing , repeating};
}
int main(){
    vector<vector<int>> grid = {{1,2,3},{4,5,6}};
    vector<int> ans = find_missing_and_repeating_2D(grid);

    cout<<"Missing: "<< ans[0] << endl;
    cout<<"Repeating: "<< ans[1] << endl;
    return 0;
}