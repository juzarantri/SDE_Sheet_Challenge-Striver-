#include<bits/stdc++.h>
void findMedian(int *arr, int n)
{
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    for(int i = 0; i < n; i++){
        int l = maxHeap.size(),r = minHeap.size();
        if(maxHeap.size() == minHeap.size()){
            if(l == 0) maxHeap.push(arr[i]);
            else if(arr[i] > minHeap.top()){
                int poped = minHeap.top();
                minHeap.pop();
                minHeap.push(arr[i]);
                maxHeap.push(poped);
            }else{
                maxHeap.push(arr[i]);
            }
        }else if(maxHeap.size() > minHeap.size()){
            if(maxHeap.top() > arr[i]){
                int poped = maxHeap.top();
                maxHeap.pop();
                minHeap.push(poped);
                maxHeap.push(arr[i]);
            }else{
                minHeap.push(arr[i]);
            }
        }
        if(maxHeap.size() > minHeap.size()){
            cout << maxHeap.top();
        }else{
            cout << (maxHeap.top()+minHeap.top())/2;
        }
        cout << " ";
    }
    cout << endl;
}