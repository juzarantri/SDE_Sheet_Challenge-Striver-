#include <bits/stdc++.h> 
int merge(vector<int> &arr, int low,int mid, int high){
    int j = mid+1;
    int count = 0;
    for(int i = low ; i <= mid; i++){
        while(j <= high && arr[i] > 2LL*arr[j]){
            j++;
        }
        count += (j-(mid+1));
    }
    
    vector<int> temp;
    int left = low, right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        }else{
            temp.push_back(arr[right++]);
        }
    }
    while(left <= mid){
        temp.push_back(arr[left++]);
    }
    while(right <= high){
        temp.push_back(arr[right++]);
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
    
    return count;
    
}
int mergeSort(vector<int> &arr, int left, int right){
    if(left < right){
        int mid = (left+right)/2;
        int count = mergeSort(arr,left,mid);
        count += mergeSort(arr,mid+1,right);
        count += merge(arr,left,mid,right);
        return count;
    }
    return 0;
}
int reversePairs(vector<int> &arr, int n){
	return mergeSort(arr,0,n-1);
}