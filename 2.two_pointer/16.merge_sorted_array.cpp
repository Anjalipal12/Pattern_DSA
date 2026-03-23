#include<bits/stdc++.h>
using namespace std;

int merge_sorted(long long a[] , long long b[] , int n1 , int n2){
    long long arr3[n1+n2];
    int left = 0 ; int right = 0 ; int index = 0;
    while(left < n1 && right<n2){
        if(a[left] < b[right]){
            left++; index++;
        }else{
            a[index] = b[right];
            right++; index++;
        }
    }
    while(left < n1){
        arr3[index++] = a[left++];
    }while(right < n2){
        arr3[index++] = b[right++];
    }

}
int main(){
    int a[] = {1,3,5,7};
    int b[] = {0,2,6,8,9};
    int n1 = sizeof(a)/sizeof(int);
    int n2 = sizeof(b)/sizeof(int);

}