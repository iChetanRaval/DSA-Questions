// Problem statement
// You have been given a 2-D array 'mat' of size 'M x N' where 'M' and 'N' denote the number of rows and columns, respectively. The elements of each row are sorted in non-decreasing order.
// Moreover, the first element of a row is greater than the last element of the previous row (if it exists).
// You are given an integer ‘target’, and your task is to find if it exists in the given 'mat' or not.
// Example:
// Input: ‘M’ = 3, 'N' = 4, ‘mat’ = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]], ‘target’ = 8
// Output: true
// Explanation: The output should be true as '8' exists in the matrix.
// Sample Input 1 :
// 3 4 8
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Sample Output 1 :
// true
// Explanation For Sample Input 1 :
// The ‘target’  = 8 exists in the 'mat' at index (1, 3).

// ------------------------------------------Code---------------------------------------------

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    int low = 0;
    int high = n*m-1;

    while(low <= high){
        int mid = (low+high)/2;
        int row = mid / m;
        int col = mid % m;
        if(mat[row][col] == target) return true;
        else if(mat[row][col] < target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}
