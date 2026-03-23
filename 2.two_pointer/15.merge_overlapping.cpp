#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge_overlapping(vector<vector<int>> intervals){
    int n = intervals.size();
    //step 1 sort
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    for(int i = 0 ; i<n ; i++){
        //step 2: compare
        if(ans.empty()==0 || intervals[i][0] > intervals.back()[1]){
            ans.push_back(intervals[i]);
        }else{
            ans.back()[1] = max(intervals.back()[1],intervals[i][1]);
        }
        return ans;
    }
};
int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{2,4},{15,18},{16,17}};
    vector<vector<int>> result = merge_overlapping(intervals);

    for(auto vec : result){
        cout << "[" << vec[0] << "," << vec[1] << "] ";
    }
    return 0;
}