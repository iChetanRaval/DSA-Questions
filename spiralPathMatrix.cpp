// Problem statement
// You are given a 2-D array 'MATRIX' of dimensions N x M, of integers. You need to return the spiral path of the matrix.
// Sample Input 1 :
// 2
// 4 4
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16
// 3 6
// 1 2 3 4 5 6 
// 7 8 9 10 11 12 
// 13 14 15 16 17 18
// Sample Output 1 :
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// 1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11

// ----------------------------Code--------------------------------------

#include <bits/stdc++.h> 
vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    // Write your code here.
    int left =0;
    int right = m-1;
    int bottom = n-1;
    int top = 0;
    vector<int>ans;

    while(top <= bottom && left <= right){
        //right
        for(int i=left; i<=right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        //bottom
        for(int i=top; i<=bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        //left
        if(top <= bottom){
            for(int i=right; i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        //top
        if(left <= right){
            for(int i=bottom; i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}
