#include <bits/stdc++.h>
int jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(),jobs.end(),[](vector<int> &a, vector<int> &b){
       return a[1] > b[1]; 
    });
    int maxi = 0;
    int n = jobs.size();
    for(int i = 0; i < n; i++){
        maxi = max(maxi,jobs[i][0]);
    }
    int arr[maxi+1];
    memset(arr,-1,sizeof(arr));
    
    int profit = 0;
    
    for(int i = 0; i < n; i++){
        int deadLine = jobs[i][0];
            for(int j = deadLine; j > 0; j--){
                if(arr[j] == -1){
                    arr[j] = 1;
                    profit += jobs[i][1];
                    break;
                }
            }
    }
    return profit;
}
