#include <bits/stdc++.h>
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    map<pair<int,int>,int> mp;
    int n = start.size();
    for(int i = 0; i < n; i++){
        mp[{end[i],i+1}] = start[i];
    }

    vector<int> ans,temp;
    int prev = INT_MIN;
    int len = 0,maxi = INT_MIN;
    for(auto i : mp){
        if(i.second > prev){
            ans.push_back(i.first.second);
            prev = i.first.first;
        }
        
    }
    return ans;
}