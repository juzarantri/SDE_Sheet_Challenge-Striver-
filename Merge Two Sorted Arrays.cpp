#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int k = (m+n)-1;
    m--;n--;
    while(m >=0 || n >= 0){
        if(arr2[n] > arr1[m]){
            arr1[k--] = arr2[n--];
        }else{
            arr1[k--] = arr1[m--];
        }
    }
    return arr1;
}