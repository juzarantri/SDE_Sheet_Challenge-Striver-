int removeDuplicates(vector<int> &arr, int n) {
    int count = 1,prev = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != prev){
            count++;
            prev = arr[i];
        }
    }
    return count;
}