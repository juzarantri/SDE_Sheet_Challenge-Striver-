#include<bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n) {
    int maxi = INT_MIN,curr = 1;
    sort(at,at+n);
    sort(dt,dt+n);
    
    int j = 0,i = 1;
    int prev = dt[0],prevMin = dt[j];
    while(i < n){
        if(at[i] <= prev){
            curr++;
            maxi = max(maxi,curr);
            i++;
        }else{
            curr--;
            prev = dt[++j];
        }
        
    }
    maxi = max(maxi,curr);
    
    return maxi;
}