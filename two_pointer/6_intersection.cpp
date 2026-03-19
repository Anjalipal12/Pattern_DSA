#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> intersection(int a[] , int b[] , int n1 , int n2){
        vector<int> ans;
        int i = 0 ; int j = 0;
        while(i<n1 && j<n2){
            if(a[i] < b[j]){
                j++;
            }else if(b[j] < a[i]){
                i++;
            }else{
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
    
};

int main(){
    int a[] = {1,1,2,3,4,5};
    int b[] = {2,3,4,5,6};
    int n1 = sizeof(a)/sizeof(int);
    int n2 = sizeof(b)/sizeof(int);
    
    solution obj;
    vector<int> result = obj.intersection(a , b , n1 , n2);

    return 0;
}