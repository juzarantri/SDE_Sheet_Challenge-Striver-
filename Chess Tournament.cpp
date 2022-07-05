#include<bits/stdc++.h>
bool isValid(vector<int> &positions,int n,int c,int mid){
    int count = 1;
    int prev = positions[0];
    for(int i = 1; i < n; i++){
        if(positions[i] - prev  >= mid){
            prev = positions[i];
            count++;
        }
        if(count == c) return true;
    }
    return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
    sort(positions.begin(),positions.end());
	int low = 1, high = positions[n-1] - positions[0];
    int res = 0;
    while(low <= high){
        int mid = (low+high) >> 1;
        if(isValid(positions,n,c,mid)){
            res = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return res;
}