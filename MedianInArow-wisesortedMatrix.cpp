// Problem statement
// You are given a row-wise sorted matrix 'mat' of size m x n where 'm' and 'n' are the numbers of rows and columns of the matrix, respectively.
// Your task is to find and return the median of the matrix.
// Example:
// Input: 'n' = 5, 'm' = 5
// 'mat' = 
// [     [ 1, 5, 7, 9, 11 ],
//       [ 2, 3, 4, 8, 9 ],
//       [ 4, 11, 14, 19, 20 ],
//       [ 6, 10, 22, 99, 100 ],
//       [ 7, 15, 17, 24, 28 ]   ]

// Output: 10

// Explanation: If we arrange the elements of the matrix in the sorted order in an array, they will be like this-
// 1 2 3 4 4 5 6 7 7 8 9 9 10 11 11 14 15 17 19 20 22 24 28 99 100 
// So the median is 10, which is at index 12, which is midway as the total elements are 25, so the 12th index is exactly midway. Therefore, the answer will be 10.

// -----------------------------------------Code------------------------------------------

int median(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    vector<int> newArr;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            newArr.push_back(matrix[i][j]);
        }
    }
    int medianOfNum = newArr.size()/2;
    sort(newArr.begin(),newArr.end());
    return newArr[medianOfNum];
}
