#include<bits/stdc++.h>
int search(int* arr, int n, int key) {
    int low = 0, high = n-1, mid;
    while(low <= high){
//         cout << high << endl;
        mid = low+(high-low)/2;
        if(arr[mid] == key) return mid;
        if(arr[low] <= arr[mid]){
            if(arr[low] <= key and key < arr[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{
            if(arr[mid] < key and arr[high] >= key){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
}