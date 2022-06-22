#include <bits/stdc++.h>
unordered_map<string,int> mp;
void solve(int n,vector<int> &arr, vector<vector<int>> &ans, int index, vector<int> temp){
   
    if(index == n){
        sort(temp.begin(),temp.end());
         string t = "";
        for(auto i : temp){
            t += to_string(i);
        }

        if(mp.find(t) == mp.end()){
            
            ans.push_back(temp);
            mp[t] = 1;    
        }
        return;
    }
    solve(n,arr,ans,index+1,temp);
    temp.push_back(arr[index]);
    solve(n,arr,ans,index+1,temp);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    mp.clear();
    vector<vector<int>> ans;
    vector<int> temp;
    solve(n,arr,ans,0,temp);
    sort(ans.begin(),ans.end());
    return ans;
}