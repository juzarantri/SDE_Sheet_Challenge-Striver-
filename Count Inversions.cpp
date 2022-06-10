#include <bits/stdc++.h> 
long long merge(long long *arr,int low,int mid,int high,long long *temp){
    int i = low;
    int j = mid;
    int k = low;
    long long invCount = 0;
    while(i <= mid-1 && j <= high){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            invCount += (mid-i);
        }
    }
    while(i <= mid-1){
        temp[k++] = arr[i++];
    }
    while(j <= high){
        temp[k++] = arr[j++];
    }
    while(low <= high){
        arr[low] = temp[low];
        low++;
    }

    return invCount;
}

long long getInvCount(long long *arr,int low,int high,long long *temp){
    long long invCount = 0;
    int mid;
    if(low < high){
        mid = (low+high)/2;
        invCount += getInvCount(arr,low,mid,temp);
        invCount += getInvCount(arr,mid+1,high,temp);
        
        invCount += merge(arr,low,mid+1,high,temp);
    }
    return invCount;
}
long long getInversions(long long *arr, int n){
    long long temp[n];
    return getInvCount(arr,0,n-1,temp);
}