#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
    for(int k = 0; k < n-2; ){
        int i = k+1, j = n-1;
        int sum = K - arr[k];
//         cout << currSum << " " << sum<< endl;
        while(i < j){
            int currSum = arr[i]+arr[j];
            if(currSum == sum){
                ans.push_back({arr[i],arr[j],arr[k]});
                int prev = arr[i];
                while(arr[i] == prev) i++;
                prev = arr[j];
                while(arr[j] == prev) j--;
            }else if(currSum < sum){
                i++;
            }else{
                j--;
            }
        }
        int prev = arr[k];
        while(arr[k] == prev) k++;
    }
    
    return ans;
}