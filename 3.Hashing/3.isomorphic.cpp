#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s , string t){
    //Step 1: if lenght is different
    if(s.size() != t.size()) return false;
    unordered_map<char,char>m1,m2;
    //step 2: har character ko traverse karo
    for(int i = 0; i<s.size() ; i++){
        //current char
        char c1 = s[i];
        char c2 = t[i];
    
        //check karo kya c1 pehla sa map ha
       if(m1.count(c1) && m1[c1] != c2){
        return false;
       }
       //reverse mein kare
       if(m2.count(c2) && m2[c2] != c1){
        return false;
       }
       m1[c1] = c2; // c1 -> c2
       m2[c2] = c1; // c2 -> c1
    }
    return true;
}
int main(){
    string s = "egg";
    string t = "tad";

    if(isIsomorphic(s,t)){
        cout<<"Isomorphic strings" <<endl;
    }else{
        cout<<"not isomorphic string "<<endl;
    }
    return 0;
}