#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int second_smallest(int arr[], int n){
        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for(int i = 1 ; i<n ; i++){
            if(arr[i] < min1){
                min2 = min1;
                min1 = arr[i];
            }else if(arr[i] < min2 && arr[i] != min1){
                min2 = arr[i];
            }
        }
        return min2;
    }
};
int main(){
    int arr[] = {22, 34,12,89,70};
    int n = sizeof(arr)/sizeof(int);

    solution obj;
    cout<<obj.second_smallest(arr,n);
    return 0;
}