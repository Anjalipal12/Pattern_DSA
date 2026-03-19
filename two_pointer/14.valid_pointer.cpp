#include<bits/stdc++.h>
using namespace std;

//input: "a man , a plan , a canal : anama "
//output: true;
class solution{
    public:
    bool isPalindrome(string s){
        int left = 0 ; int right = s.size()-1;

        while(left < right){

            if(!isalnum(s[left])) left++;
            else if(!isalnum(s[right]))right--;

            else if(tolower(s[left]) != tolower(s[right])){
                return false;
            }else{
                left++;
                right--;
            }
        }
        return true;

    }

};
int main(){
    string s = "A man , a place , a canal : anama";
    solution obj;
    cout<<obj.isPalindrome(s);
    return 0;
}