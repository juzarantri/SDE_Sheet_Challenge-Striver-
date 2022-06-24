#include <bits/stdc++.h>
bool isValid(int matrix[9][9],int row,int col,int k){
    for(int i = 0; i < 9; i++)
    {
        if(matrix[row][i] == k) return false;
        if(matrix[i][col] == k) return false;
        if(matrix[3*(row/3)+i/3][3*(col/3)+i%3] == k) return false;
    }
    return true;
}

bool solve(int matrix[9][9]){
    for(int row = 0; row < 9; row++){
        for(int col = 0; col < 9; col++){
            if(matrix[row][col] == 0){
                for(int i = 1; i <= 9; i++){
                    if(isValid(matrix,row,col,i)){
                        matrix[row][col] = i;
                        if(solve(matrix)) return true;
                        else matrix[row][col] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}


bool isItSudoku(int matrix[9][9]) {
    return solve(matrix);
}
