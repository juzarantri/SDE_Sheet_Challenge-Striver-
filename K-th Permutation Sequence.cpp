#include <bits/stdc++.h>
string kthPermutation(int n, int k) {
    vector<int> numbers;
    int fact = 1;
    for(int i = 1; i < n; i++){
        numbers.push_back(i);
        fact = fact * i;
    }
    numbers.push_back(n);
    string ans = "";
    k--;
    while(1){
        ans += to_string(numbers[k/fact]);
        numbers.erase(numbers.begin()+(k/fact));
        if(numbers.size() == 0) break;
        k = k % fact;
        fact = fact/numbers.size();
    }
    return ans;
}
