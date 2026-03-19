#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void move_zeroes(int arr[] , int n){
        int j = -1;
        for(int i = 0; i<n ; i++){
            if(arr[i] == 0){
                j=i;
                break;
            }
        }
        for(int i = j+1 ; i<n ; i++){
            if(arr[i] != 0){
                swap(arr[i] , arr[j]);
                    j++;
                
            }
        }
    }
};

int main(){
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr)/sizeof(int);
    
    solution obj;
    obj.move_zeroes(arr,n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}