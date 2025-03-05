// Problem statement
// You are given an array 'arr' sorted in non-decreasing order and a number 'x'. You must return the index of the lower bound of 'x'.
// Sample Input 3:
// 6
// 1 2 2 3 3 5
// 7

// Sample Output 3:
// 6

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int lb = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
	return lb;
}
