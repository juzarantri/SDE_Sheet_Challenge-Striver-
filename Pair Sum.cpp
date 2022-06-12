#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &nums, int target){
    sort(nums.begin(),nums.end());
   vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j < nums.size(); j++){
                if(j!=i){
                    if(nums[i] + nums[j] == target){
                        ans.push_back({nums[i],nums[j]});
                    }
                }
            }
        }
    return ans;
}