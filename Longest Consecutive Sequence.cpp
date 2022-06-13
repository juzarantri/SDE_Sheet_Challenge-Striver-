#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> s;
    for(int i = 0; i < arr.size(); i++){
        s.insert(arr[i]);
    }
    int  maxi = INT_MIN;
    int search;
    for(int i = 0; i < arr.size(); i++){
        int curCount = 0;
        search = arr[i];
        if(s.find(search-1) == s.end()){
            while(s.find(search++) != s.end()){
                curCount++;
            }
            maxi = max(maxi,curCount);
        }
    }
    return maxi;
    
}