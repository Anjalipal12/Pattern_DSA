#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<vector<int>> three_sum(vector<int> &a , int n,int target){
        vector<vector<int>>ans;
        sort(ans.begin(),ans.end());
        for(int i = 0; i<n ; i++){
            if(i>0 && a[i]==a[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = a[i] + a[j] + a[k] ;
                if(sum < target){
                    j++;
                }else if(sum > target){
                    k--;
                }else{
                    vector<int>temp = {a[i] + a[j] + a[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                }
            }
            //remove dublicate
            while(j<k && a[i] == a[j-1])j++;
            while(j<k && a[i] == a[k+1])k--;
        }
        return ans;
    }
    
};
int main(){
    vector<int> a = {2,6,5,8,9};
    int n = a.size();
    int target = 14;

    solution obj;
    vector<vector<int>> result = obj.three_sum(a,n,target);

    if(result.empty()){
        cout<<"no triplet found\n";
    }else{
        for(auto vec: result){
            for(int x: vec) cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}