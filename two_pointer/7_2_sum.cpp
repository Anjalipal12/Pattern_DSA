#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    bool two_sum(vector<int> &a , int n,int target){
        int start = 0 ; int end = n-1;
        sort(a.begin() , a.end());
        while(start <= end){
            int sum = a[start] + a[end];
            if(sum == target){
                return "yes";
            }else if(sum > target){
                end--;
            }else{
                start++;
            }
        }
        return "NO";
    }
    
};

int main(){
    vector<int> a = {2,6,5,8,9};
    int n = sizeof(a)/sizeof(int);
    int target = 14;
    
    solution obj;
    bool result = obj.two_sum(a,n,target);

    if(result) cout<<"yes";
    else cout<<"No";

    return 0;
}