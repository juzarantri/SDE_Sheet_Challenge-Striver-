#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int row = -1;
    for(int i = 0; i < m; i++){
        if(mat[i][n-1] >= target){
            row = i;
            break;
        }
    }
    
    if(row == -1) return false;
    else{
        for(int i = 0; i < n; i++){
            if(mat[row][i]  == target) return true;
        }
        return false;
    }
}
