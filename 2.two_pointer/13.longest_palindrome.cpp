#include<bits/stdc++.h>
using namespace std;

int expand(string &s , int left , int right){
    while(left>=0 && right<s.size() && s[left]==s[right]){
        left--,right++;
    }
    return left - right - 1;
}
string longestPalindrome(string s){
    int start = 0 ; int maxlen = 0;
    for(int i = 0 ; i<s.size() ; i++){
        int len1 = expand(s,i,i);
        int len2 = expand(s,i,i+1);
        int len = max(len1 , len2);

        //step: new palindrome bada ha
        if(len > maxlen){
            maxlen = len;
            start = i - (len - 1)/2;
        }
    }
    return s.substr(start,maxlen);
}
int main(){
    string s = "babad";
    cout<<longestPalindrome(s);
    return 0;
}