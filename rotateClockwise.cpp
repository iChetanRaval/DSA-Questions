// Problem statement
// You are given a square matrix of dimensions ‘N * N’. You have to rotate the matrix 90 degrees in a clockwise direction.

// EXAMPLE:
// Input: 'N' = 2, 'NUMS' = [[1, 2], [3, 4]]

// Output: [[3, 1], [4, 2]]

// Here the given matrix is rotated 90 degrees in a clockwise direction.
// Sample Input 1 :
// 2
// 2
// 1 2
// 3 4
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 1 :
// 3 1
// 4 2
// 7 4 1
// 8 5 2
// 9 6 3

----------------------------Code------------------------------------
#include <bits/stdc++.h> 
void rotateClockwise(int n, vector < vector < int >> & nums) {
    // Write your code here.
    //Transpose of Matrix
    for(int i=0; i<n-1; i++){
        for(int j=i+1;j<n; j++){
            swap(nums[i][j],nums[j][i]);
        }
    }
    //Reverse the row of matrix
    for(int i=0; i<n; i++){
        //row is mat[i]
        reverse(nums[i].begin(),nums[i].end());
    }
}
