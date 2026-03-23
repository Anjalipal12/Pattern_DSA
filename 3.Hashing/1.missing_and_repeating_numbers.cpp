#include<bits/stdc++.h>
using namespace std;

vector<int> find_missing_and_repeating(vector<int>&nums){
    int n = nums.size();
    unordered_map<int,int>freq;

    int missing = -1; int repeating = -1;

    //count freq

    for(int num: nums) freq[num]++;
    //step 2: find missing and repeating
    for(int i = 1; i<=n ; i++){
        if(freq[i] == 0) missing = i;
        if(freq[i] > 1)  repeating = i;
    }
    return{missing , repeating};
}

int main(){
    vector<int> nums = {4,3,6,2,1,1};

    vector<int> result = find_missing_and_repeating(nums);

    cout<<"Missing: "<< result[0] <<endl;
    cout<<"Repeating: "<<result[1] <<endl;

    return 0;
}