#include <bits/stdc++.h> 
void rev(int i, int j, vector<int> &p){
    while(i < j){
         swap(p[i],p[j]);
        i++;
        j--;
    }
}
vector<int> nextPermutation(vector<int> &p, int n)
{
    vector<int> res(n);
    int i = p.size()-2;
    while(p[i] >= p[i+1]){
        i--;
    }
    if(i >= 0){
        int j = p.size()-1;
        while(p[j] <= p[i]){
            j--;
        }    
        swap(p[i],p[j]);
    }
    rev(i+1,p.size()-1,p);
    
    return p;
}