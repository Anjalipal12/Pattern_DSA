#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<vector<int>> three_sum(vector<int> &a , int n,int target){
        vector<vector<int>> ans;
        sort(a.begin(),a.end());
        for(int i = 0 ; i<n ; i++){
            if(i>0 && a[i]==a[i-1]) continue;

            for(int j = i+1 ; j<n ; j++){
                if(j>i+1 && a[j]==a[j-1]) continue;
                int k = j+1;
                int l = n-1;
                
                while(k<l){
                    long long sum = (long long)a[i] + a[j] + a[k] + a[l];
                    if(sum == target){
                        ans.push_back({a[i],a[j],a[k],a[l]});
                        k++;
                        l--;
                        while(k<l && a[k]==a[k-1])k++;
                        while(k<l && a[k]==a[k+1])l--;
                    }else if(sum <= target){
                        k++;
                    }else{
                        l--;
                    }
                }
            }
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