#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void reverse_arr(int arr[], int start, int end){
        while(start < end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }   
    }

    void rotate_right(int arr[] , int n, int k){
        k = k % n;

        reverse_arr(arr, 0, n-1);
        reverse_arr(arr, 0, k-1);
        reverse_arr(arr, k, n-1);
    }
};

int main(){
    int arr[] = {2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    solution obj;
    obj.rotate_right(arr,n,k);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}