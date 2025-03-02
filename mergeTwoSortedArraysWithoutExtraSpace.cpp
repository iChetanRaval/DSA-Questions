// Problem statement
// Given two non-decreasing sorted arrays, ‘A’ and ‘B’, having ‘N’ and ‘M’ elements, respectively.
// You must merge these arrays, ‘A’ and ‘B’, into a sorted array without using extra space. Of all the 'N + M' sorted elements, array 'A' should contain the first 'N' elements, and array 'B' should have the last 'M' elements.
// Sample Input 1:
// 3 4
// 1 8 8
// 2 3 4 5
// Sample Output 1:
// 1 2 3 4 5 8 8
// Explanation Of Sample Input 1:
// We have ‘A’ = {1, 8, 8} and ‘B’ = {2, 3, 4, 5}. 
// Merging the two arrays results in {1, 2, 3, 4, 5, 8, 8}.
// Hence the answer is {1, 2, 3, 4, 5, 8, 8}, where ‘A’ contains {1, 2, 3} and ‘B’ contains {4, 5, 8, 8}.

// -----------------------------------Code--------------------------------------

#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
    for (int i = 0; i < b.size(); i++)
    {
        a.push_back(b[i]);
    }
     b.clear();
    sort(a.begin(),a.end());
	
}
