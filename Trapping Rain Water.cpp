#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    
    vector<long> left(n),right(n);
    left[0] = arr[0];
    long maxi = left[0];
    for(int i = 1; i < n; i++){
        maxi =  max(arr[i],maxi);
        left[i] = maxi;
    }
    right[n-1] = arr[n-1];
    maxi = right[n-1];
    for(int i = n-2; i >= 0; i--){
        maxi =  max(arr[i],maxi);
        right[i] = maxi;
    }
    long sum = 0;
    for(int i = 0; i < n; i++){
        sum += min(left[i],right[i])-arr[i];
    }
    return sum;
}