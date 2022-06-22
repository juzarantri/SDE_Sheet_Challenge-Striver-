#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>> mp;
//     sort(start.begin(),start.end());
//     sort(finish.begin(),finish.end());
    int prev = INT_MIN;
    int ans = 0;
    int n = start.size();
    for(int i = 0; i < n; i++){
        mp.push_back({start[i],finish[i]});
    }
    sort(mp.begin(),mp.end(),[](pair<int,int> &p1,pair<int,int> &p2){
            return p1.second < p2.second;
    });

    for(int i = 0; i < n; i++){
        if(mp[i].first >= prev){
            ans++;prev = mp[i].second;
        }
    }
    return ans;
}