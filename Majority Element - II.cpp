#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int num1 = -1,num2 = -1;
    int cnt1 = 0 , cnt2 = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(cnt1 == 0){
            num1 = arr[i];
        }else if(cnt2 == 0){
            num2 = arr[i];
        }
        
        if(num1 == arr[i]) cnt1++;
        else if(num2 == arr[i]) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
//     cout << num1 << " " << num2 << endl;
    cnt1 = cnt2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == num1) cnt1++;
        else if(arr[i] == num2) cnt2++;
    }
    if (cnt1 > n/3 && cnt2 > n/3) {
        return {num1,num2};
    }else if(cnt1 > n/3) return {num1};
    else if(cnt2 > n/3) return {num2};
    return {};

}