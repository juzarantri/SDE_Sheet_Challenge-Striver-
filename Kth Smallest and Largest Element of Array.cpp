#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	sort(arr.begin(),arr.end());
    return {arr[k-1],arr[n-k]};
}

/// this was giving TLE
/*
#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    for(int i = 0; i < n; i++){
        maxHeap.push(arr[i]);
        minHeap.push(arr[i]);
        if(minHeap.size() > k){
            minHeap.pop();
        }
        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }
    return {maxHeap.top(),minHeap.top()};
}
*/