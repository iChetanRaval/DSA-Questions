// Problem statement
// You are given a sorted array ‘arr’ containing ‘n’ integers and an integer ‘x’.Implement the ‘upper bound’ function to find the index of the upper bound of 'x' in the array.
// Sample Input 2:
// 5 10
// 1 2 5 6 10   

// Sample Output 2:
// 5

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int ub = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
		
}
