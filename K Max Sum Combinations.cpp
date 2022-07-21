#include<bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	priority_queue<int,vector<int>,greater<int>> maxHeap1;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            int sum = a[i]+b[j];
            if(maxHeap1.size() < k) maxHeap1.push(sum);
            else if(sum >= maxHeap1.top()){
                maxHeap1.pop();
                maxHeap1.push(sum);    
            }
            
        }
    }
    vector<int> ans(k);
    while(k){
        k--;
        ans[k] = maxHeap1.top();
        maxHeap1.pop();
    }
    return ans;
}