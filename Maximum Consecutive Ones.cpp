#include <bits/stdc++.h>
int longestSubSeg(vector<int> &arr , int n, int k){
    
    int maxi = INT_MIN;
    int j = -1;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){ 
        if(arr[i] == 0)
            count++;
        while(count > k){
            j++;
            if(arr[j] == 0){
                count--;
            }
        }
        int curr = i - j;
        maxi = max(maxi,curr);
    }
    return maxi;
    
}
