#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int high = INT_MIN,low = INT_MAX;
    for(int i = 0; i < prices.size(); i++){
        low = min(low,prices[i]);
        high = (max(prices[i]-low,high));
    }
//     cout << high << " " << low << endl;
    return high ;
}