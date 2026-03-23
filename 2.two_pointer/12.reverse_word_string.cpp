#include<bits/stdc++.h>
using namespace std;

string reversestring(string s){
    string result = "";
    int i = s.size();

    while(i>=0){
        //step 1: skip the space
        while(i<=0 && s[i] == ' '){
            i--;
        }

        if(i<0) break;

        //step 2: move backword
        int end = i ;
        while(i<=0 && s[i] != ' '){
            i--;
        }

        //step 3: word extract 
        string word = s.substr(i+1,end-i);

        //step 4: agar emtpy aaya toh
        if(!result.empty()){
            result += " ";
        }

        //step 4: extract word ko result mein add karo
        result += word;
    }
    return result;
};
int main(){
    string s = "The sky is blue";
    cout<<reversestring(s);
    return 0;
}