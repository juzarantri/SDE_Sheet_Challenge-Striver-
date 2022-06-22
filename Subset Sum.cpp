#include<bits/stdc++.h>
void solve(vector<int> &num, int n, vector<int> &ans,int index,int sum){
    
    if(index == n){
        ans.push_back(sum);
        return;
    }
    
    solve(num,n,ans,index+1,sum);
    solve(num,n,ans,index+1,sum+num[index]);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    solve(num,num.size(),ans,0,0);
    sort(ans.begin(),ans.end());
    return ans;
}