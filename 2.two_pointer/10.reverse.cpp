#include<bits/stdc++.h>
using namespace std;

int reverse_arr(int arr[] , int n){
    int i = 0 ; int j = n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);

    reverse_arr(arr,n);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}