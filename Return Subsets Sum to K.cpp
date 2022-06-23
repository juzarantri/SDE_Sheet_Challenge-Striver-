#include <bits/stdc++.h>
void solve(vector<int> &arr,vector<vector<int>> &ans,vector<int> &container,int target,int n, int index,int sum){
    if(sum == target){
        ans.push_back(container);
    }
    if(n == target) return;
    for(int i = index; i < n; i++){
        container.push_back(arr[i]);
        solve(arr,ans,container,target,n,i+1,sum+arr[i]);
        container.pop_back();
    }
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int> container;
    solve(arr,ans,container,k,n,0,0);
    return ans;
}