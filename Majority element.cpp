#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	
    int count = 0,element;
    for(int i = 0; i < n; i++){
        if(count == 0)
            element  = arr[i];
        if(arr[i] == element) count++;
        else count--;
    }
    int eleCount = 0;
    for(int i = 0; i < n; i++){
        if(element  == arr[i]) eleCount++;
    }
    if(eleCount > n/2)
        return element;
    return -1;
}