#include <bits/stdc++.h>
bool compare(pair<int, int> &i1,pair<int, int> &i2){
    double a = (double)i1.second/i1.first;
    double b = (double)i2.second/i2.first;
    return a > b;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    sort(items.begin(),items.end(),compare);
    double sum = 0.0;
    int currWeight = 0;
    for(int i = 0; i < n; i++){
        if(items[i].first+currWeight <= w){
            currWeight = items[i].first+currWeight;
            sum += items[i].second;
        }else{
            sum += (double)(w-currWeight)*items[i].second/items[i].first;
            break;
        }
    }
    return sum;
}