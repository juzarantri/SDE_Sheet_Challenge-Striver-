#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int,int> mp;
    int prefix = 0,count = 0;
    for(int i = 0; i < arr.size(); i++){
        prefix ^= arr[i];
        if(prefix == x) count++;
        int k = prefix^x;
        if(mp.find(k) != mp.end()) count += mp[k];
        mp[prefix]++;
    }
    return count;
}