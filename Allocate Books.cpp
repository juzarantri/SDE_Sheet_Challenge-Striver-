#include<bits/stdc++.h>
bool isValid(vector<int> &time,int n,int k,long long mid){
    int curr = 1;
    long long sum = 0;
    for(int i = 0; i < n ; i++){
        sum += time[i];
        if(sum > mid){
            curr++;
            sum = time[i];
        }
        if(curr > k) return false;
    }
//     return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
    long long sum = 0;
    int maxi = INT_MIN;
	for(int i = 0; i < m; i++){
        sum += time[i];
        maxi = max(maxi,time[i]);
    }
    long long res = -1;
    long long low = maxi, high = sum;
    while(low <= high){
        long long mid = (low+high) >> 1;
        if(isValid(time,m,n,mid)){
//             if(res >= 10000) return res;
            res = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return res;
}