#include <bits/stdc++.h>
vector<vector<int> > ans;
bool moveLeft(int row,int col,vector<vector<int> > &maze,int n){
    if(col-1 < 0) return false;
    if(maze[row][col-1] == 0) return false;
    return true;
}
bool moveRight(int row,int col,vector<vector<int> > &maze,int n){
    if(col+1 == n) return false;
    if(maze[row][col+1] == 0) return false;
    return true;
}
bool moveUp(int row,int col,vector<vector<int> > &maze,int n){
    if(row-1 < 0) return false;
    if(maze[row-1][col] == 0) return false;
    return true;
}
bool moveDown(int row,int col,vector<vector<int> > &maze,int n){
    if(row+1 == n) return false;
    if(maze[row+1][col] == 0) return false;
    return true;
}
void solve(int row,int col,vector<vector<int> > &maze,int n,vector<vector<int>> &path,int di[],int dj[]){
//     cout << row << " " << col << endl;
    
    
    if(row == n-1 && col == n-1){
        vector<int> temp;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                temp.push_back(path[i][j]);
            }
        }
        temp[n*n-1] = 1;
        ans.push_back(temp);
        return;
    }
    
    for(int i = 0; i < 4; i++){
        int nextRow = row + di[i];
        int nextCol = col + dj[i];
        if(nextRow >= 0 && nextCol >= 0 && nextRow < n && nextCol < n && !path[nextRow][nextCol] && maze[nextRow][nextCol] == 1){
            path[row][col] = 1;
            solve(nextRow,nextCol,maze,n,path,di,dj);
            path[row][col] = 0;
        }
    }
}

vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  vector<vector<int>> path(n,vector<int>(n,0));
  int di[] = {0,1,0,-1};
  int dj[] = {-1,0,1,0};
  solve(0,0,maze,n,path,di,dj);
  return ans;
}