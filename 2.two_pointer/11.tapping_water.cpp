#include<bits/stdc++.h>
using namespace std;

int trap_water(int height[] , int n){
    int left = 0 ; int right = n-1;
    int leftmax = 0; int rightmax = 0;
    int water = 0;
    while(left < right){
        if(height[left] < height[right]){
            if(height[left] >= leftmax){
                leftmax = height[left];
            }else{
                water += leftmax - height[left];
            }left++;
        }else{
            if(height[right] <= rightmax){
                rightmax = height[right];
            }else{
                water += rightmax - height[right];
            }
            right--;
        }
    }
    return water;
};
int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height)/sizeof(int);

    cout<<trap_water(height,n);

    return 0;
}