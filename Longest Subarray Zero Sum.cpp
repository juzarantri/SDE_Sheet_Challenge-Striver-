#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    unordered_map<int,int> hash;
    int maxi = 0;
    int n = arr.size();
    int prefix = 0;
    hash[0] = -1;
    for(int i = 0; i < n; i++){
        prefix += arr[i];
        if(hash.find(prefix) == hash.end())
            hash[prefix] = i;
        int currMax = i-hash[prefix];
        maxi = max(maxi,currMax);
    }
    return maxi;

}