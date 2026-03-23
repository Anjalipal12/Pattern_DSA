#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int largest(int arr[], int n){
        vector<int>ans;
        int max = arr[0];
        for(int i = 1 ; i<n ; i++){
            if(arr[i] > max){
            max = arr[i];
            }
        }
        return max;
    }
};

int main(){
    int arr[] = {12,10,44,57,35};
    int n = sizeof(arr)/sizeof(int);

    solution obj;
    cout<<obj.largest(arr,n);
    return 0;
}