#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> union_arr(int a[] , int b[] , int n1 , int n2){
        vector<int> uni;
        int i = 0 ; int j = 0;
        //merging
        while(i < n1 && j < n2){
            if(a[i] <= b[j]){
                if(uni.size() == 0 || uni.back() != a[i]){
                    uni.push_back(a[i]);
                }i++;
            }
            else{
                if(uni.size()==0|| uni.back() != b[j]){
                    uni.push_back(b[j]);
                }j++;
            }
        }
        // remaining one eleemnt from a[]
        while(i < n1){
            if(uni.size() == 0 || uni.back() != a[i]){
                uni.push_back(a[i]);
            }i++;
        }
        //remaining one elemnt from b[]
        while(i < n2){
            if(uni.size() == 0 || uni.back() != b[j]){
                uni.push_back(b[j]);
            }
        }j++;
    }
    
};

int main(){
    int a[] = {1,1,2,3,4,5};
    int b[] = {2,3,4,5,6};
    int n1 = sizeof(a)/sizeof(int);
    int n2 = sizeof(b)/sizeof(int);
    
    solution obj;
    vector<int> result = obj.union_arr(a , b , n1 , n2);

    return 0;
}