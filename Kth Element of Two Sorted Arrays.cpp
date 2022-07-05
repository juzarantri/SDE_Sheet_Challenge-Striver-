#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    if(n < m) return ninjaAndLadoos(row2,row1,n,m,k);
    int n1 = row1.size();
    int n2 = row2.size();
    int low = max(0,k-n-1), high = min(m,k);
//     if(k == n1+n2) return min(row1[n1-1],row2[n2-1]);
    while(low <= high){
        int cut1 = (low+high) >> 1;
        int cut2 = (k-1)-cut1;
//         cout << low << " " << high << endl; 
//         cout << cut1 << " " << cut2 << endl; 
        
        int left1 = (cut1 == 0) ? INT_MIN : row1[cut1-1];
        int left2 = (cut2 == 0) ? INT_MIN : row2[cut2-1];
        
        int right1 = (cut1 == n1) ? INT_MAX : row1[cut1];
        int right2 = (cut2 == n2) ? INT_MAX : row2[cut2];
//         cout << left1 << " " << left2 << endl;
//         cout << right1 << " " << right2 << endl << endl;
//         cout << endl;
        if(left1 <= right2 && left2 <= right1){
            return min(right1,right2);
        }
        if(left1 > right2){
            high = cut1 - 1;
        }else{
            low = cut1 + 1;
        }   
    }
//     cout << low << " " << high << endl; 
    return 0;
    
}