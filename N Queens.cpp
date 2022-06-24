#include <bits/stdc++.h>
vector<vector<int>> ans;
bool isValid(vector<vector<int>> &board,int row,int col,int n){
    int tempr = row;
    int tempc = col;
    while(row >= 0 && col >= 0){
        if(board[row][col] == 1) return false;
        row--;
        col--;
    }
    row = tempr;
    col = tempc;
    while(col >= 0){
        if(board[row][col] == 1) return false;
        col--;
    }
    row = tempr;
    col = tempc;
    while(row < n && col >= 0){
        if(board[row][col] == 1) return false;
        row++;
        col--;
    }
    return true;
}
void solve(vector<vector<int>> &board,int n,int col){
    if(col == n){
        vector<int> temp;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                temp.push_back(board[i][j]);
            }
            
        }
        ans.push_back(temp);
        return;
    }
    for(int row = 0; row < n; row++){
            if(isValid(board,row,col,n)){
                board[row][col] = 1;
                solve(board,n,col+1);
                board[row][col] = 0;
            }
    }
}
vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>> board(n,vector<int>(n,0));    
    solve(board,n,0);
    return ans;
}