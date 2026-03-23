#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int max_consecutive_ones(int arr[], int n){
        int count = 0; int maxi = 0;
        for(int i = 1; i<n ; i++){
            if(arr[i] == 1){
                count++;
                maxi = max(maxi,count);
            }
            else{
                count = 0;
            }
        }
        return maxi;
    }
};
int main(){
    int arr[] = {1,1,0,1,1,1,1,0,1,1};
    int n = sizeof(int)/sizeof(int);

    solution obj;
    cout<<obj.max_consecutive_ones(arr,n);

    return 0;
}