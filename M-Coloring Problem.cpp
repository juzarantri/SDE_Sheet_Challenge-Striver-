#include <bits/stdc++.h>
bool isOk(vector<vector<int>> &mat, int col, vector<int>& color,int idx){
    int n = mat[idx].size();
    for(int i = 0; i < n; i++){
        if(i!=idx)
            if(color[i] == col && mat[i][idx] == 1)
                return false;
    }
    return true;
}
bool solve(vector<vector<int>> &mat, int m, vector<int>& color,int node){
    int n = mat.size();
    if(node == n) return true;
    
            
    for(int k = 1; k <= m; k++){
       
          if(isOk(mat,k,color,node)){
             color[node] = k;
             if(solve(mat,m,color,node+1)) return true;
             else color[node] = 0;
          }
       
    }
    return false;   
}
string graphColoring(vector<vector<int>> &mat, int m) {
    vector<int> color(mat.size(),0);
    if(solve(mat,m,color,0)){
        return "YES";
    }else{
        return "NO";
    }
}