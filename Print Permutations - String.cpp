#include <bits/stdc++.h>

void solve(vector<string> &ans,int n, string &s, string &cs,vector<int> &visited){
    if(cs.length() == n){
        ans.push_back(cs);
        return;
    }
    for(int i = 0; i < n; i++){
        if(visited[i] == 1) continue;
        visited[i] = 1;
        cs.push_back(s[i]);
        solve(ans,n,s,cs,visited);
        visited[i] = 0;
        cs.pop_back();
    }
}
vector<string> findPermutations(string &s) {
    vector<string> ans;
    vector<int> visited(s.length());
    string cs = "";
    solve(ans,s.length(),s,cs,visited);
    return ans;
}