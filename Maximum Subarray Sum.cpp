#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long currBest = 0, overAllBest = 0;
    for(int i = 0; i < n; i++){
        if(currBest + arr[i] > arr[i]){
            currBest = currBest + arr[i];
        }else{
            currBest = arr[i];
        }
        
        if(overAllBest < currBest){
            overAllBest = currBest;
        }
        
    }
    return overAllBest;
}