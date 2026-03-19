#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    bool sorted_array(int arr[] , int n){
        for(int i = 1 ; i<n ; i++){
            if(arr[i-1] > arr[i]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    int arr[] = {10,12,45,23,9,8};
    int n = sizeof(arr)/sizeof(int);

    solution obj;
    cout<<obj.sorted_array(arr,n);
    return 0;
}