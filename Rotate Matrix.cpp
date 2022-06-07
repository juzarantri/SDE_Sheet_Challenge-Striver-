#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int dir = 0;
    int top = 0, bottom = n-1, left = 0, right = m-1;
    int prev;
    while(top < bottom && left < right){
//         cout << top << " " << bottom << endl;
        if(dir == 0){
            int tl = left, tr = right;
            prev = mat[top][tl];
            while(tl < tr){
//                 cout << tl+1 << " " << tr<< endl;
                int last = mat[top][tl+1];
                mat[top][tl+1] = prev; 
                prev = last;
                tl++;
            }
            dir++;
            continue;
        }
        if(dir == 1){
            int tt = top, tb = bottom;
//             cout << prev << endl;
            while(tt < tb){
//                 cout << tl+1 << " " << tr<< endl;
                int last = mat[tt+1][right];
                mat[tt+1][right] = prev; 
                prev = last;
                tt++;
            }
//             cout << prev;
            dir++;
            continue;
//             break;
        }
        if(dir == 2){
            int tr = right, tl = left;
//             cout << prev << endl;
            while(tr > tl){
//                 cout << tl+1 << " " << tr<< endl;
                int last = mat[bottom][tr-1];
                mat[bottom][tr-1] = prev; 
                prev = last;
                tr--;
            }
            dir++;
            continue;
//             break;
        }
        if(dir == 3){
            int tt = top, tb = bottom;
//             cout << prev << endl;
            while(tb > tt){
                int last = mat[tb-1][left];
                mat[tb-1][left] = prev; 
                prev = last;
                tb--;
            }
//             cout << prev;
            dir = 0;
            left++;
            top++;
            bottom--;
            right--;
        }
    }

}