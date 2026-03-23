#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int leaders(int arr[] , int n){
        int maxi = INT_MIN;
        vector<int>ans;
        for(int i = n-1; i>=0 ; i++){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
            }
            maxi = max(maxi,arr[i]);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
int main(){
    int arr[] = {12,32,10,65};
    int n = sizeof(int)/sizeof(int);

    solution obj;
    vector<int>result = obj.leaders(arr,n);

    for(x:result){
        cout<<x<<" ";
    }

    return 0;
}