
// Problem :  Set Matrix Zeros - Code studio
// Problem statement
// You are given an N x M integer matrix. Your task is to modify this matrix in place so that if any cell contains the value 0, then all cells in the same row and column as that cell should also be set to 0.

// Requirements:

// If a cell in the matrix has the value 0, set all other cells in that cell's row and column to 0.
// You should perform this modification in place (without using additional matrices).
// You must do it in place.

// For Example:

// If the given grid is this:
// [7, 19, 3]
// [4, 21, 0]

// Then the modified grid will be:
// [7, 19, 0]
// [0, 0,  0]

//   Sample Input 1 :
// 2
// 2 3
// 7 19 3
// 4 21 0
// 3 3
// 1 2 3
// 4 0 6
// 7 8 9
// Sample Output 1 :
// 7 19 0
// 0 0 0
// 1 0 3
// 0 0 0
// 7 0 9

// -------------------Code-----------------------

#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size();
	int m = matrix[0].size();
	int col[m] = {0};
	int row[n] = {0};
	for (int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j] == 0){
				row[i] = 1;
				col[j]=1;
			}
		}
	}
	for (int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(row[i] || col[j]){
				matrix[i][j] = 0;
			}
		}
	}
}

