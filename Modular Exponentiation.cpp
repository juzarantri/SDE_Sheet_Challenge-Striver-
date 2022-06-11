#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	int ans = 1;
//     x = x % m;
    while(n){
        if(n%2){
            ans = (1ll*ans*x)%m;
//             ans %= m;
            n--;
        }else{
            x = (1ll*x*x)%m;
//             x %= m;
            n = n / 2;
        }
    }
    return ans%m;
}