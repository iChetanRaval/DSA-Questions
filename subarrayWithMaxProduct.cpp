// Problem statement
// Given an array ‘Arr’ that has ‘N’ elements. You have to find the subarray of ‘Arr’ that has the largest product. You must return the product of the subarray with the maximum product.
// Sample Input 1:
// 4
// 1 -2 3 -4
// Sample Output 1:
// 24
// Explanation Of Sample Input 1:
// Given, ‘Arr’ = {1, -2, 3, -4}. The subarrays of ‘Arr’ are: 
// {{1}, {1, -2}, {1, -2, 3}, {1, -2, 3, -4}, {-2}, {-2, 3}, {-2, 3, -4}, {3}, {3, -4}, {-4}}.
// Among these subarrays, {1, -2, 3, -4} and {-2, 3, -4} have the maximum product, equal to 24.
// Hence, the answer is 24.

// -----------------------------Code---------------------------------

#include<vector>
#include<bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int pre = 1;
	int suff = 1;
	int maxi = INT_MIN;
	int n = arr.size();

	for(int i=0; i<n; i++){
		if(pre == 0) pre = 1;
		if(suff == 0) suff = 1;

		pre = pre * arr[i];
		suff = suff * arr[n-i-1];
		maxi = max(maxi, max(pre,suff));
	}
	return maxi;
}
