// Problem statement
// You are given a 2D matrix ‘MATRIX’ of ‘N’*’M’ dimension. You must check whether a given number ‘target’ is present in the matrix.
// The following properties apply to the given matrix:
// 1. In each row, integers are sorted from left to right.
// 2. Each row's first integer is greater than the previous row's last integer.
// Example:
// Input:
// 'MATRIX' = [ [1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60] ], 'TARGET' = 3 
// Output:1
// Explanation: Since the given number ‘TARGET’ is present in the matrix, we return true.

// Sample Input 1:
// 3 3
// 1 3 7
// 10 12 15
// 19 20 21
// 12
// Sample Output 1:
// 1
// Explanation Of Sample Input 1:
// Input:
// 'MATRIX' = [ [1, 3, 7], [10, 12, 15], [19, 20, 21] ], 'TARGET' = 12 
// Output: 1

bool searchElement(vector<vector<int>> &MATRIX, int target) {
    // Write your code here.
    int n = MATRIX.size();
    int m = MATRIX[0].size();
    int row = 0;
    int col = m-1;
    while(row < n && col >= 0){
        if(MATRIX[row][col] == target){
            return true;
        }
        else if(MATRIX[row][col] < target){
            row++;
        }
        else{
            col--;
        }
    }
    return false;
}
