#include <bits/stdc++.h>
vector<vector<string>> ans;
vector<string> container;
bool isPalindrome(string str1,int i ,int j){
    while(i < j){
        if(str1[i] != str1[j]) return false;
        i++;
        j--;
    }
    
    return true;
}
void solve(string &s,int i, int j){
    if(i == j) {ans.push_back(container); return;}
    for(int k = i; k < j; k++){
        if(isPalindrome(s,i,k)){
            container.push_back(s.substr(i,k-i+1));
            solve(s,k+1,j);
            container.pop_back();
        }
    }
}

vector<vector<string>> partition(string &s) 
{
    solve(s,0,s.length());    
    return ans;
}