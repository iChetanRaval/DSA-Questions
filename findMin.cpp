// Problem statement
// You are given an array 'arr' of size 'n' having unique elements that has been sorted in ascending order and rotated between 1 and 'n' times which is unknown.
// The rotation involves shifting every element to the right, with the last element moving to the first position. For example, if 'arr' = [1, 2, 3, 4] was rotated one time, it would become [4, 1, 2, 3]
// Sample Input 1 :
// 4
// 3 4 1 2   
// Sample Output 1 :
// 1
// Explanation of Sample Input 1 :
// The original array was [1, 2, 3, 4] and it was rotated 2 times.

int findMin(vector<int>& arr)
{
	// Write your code here.
	int low = 0;
	int high = arr.size()-1;
	int ans = INT_MAX;

	while(low <= high){
		int mid = (low+high)/2;
		if(arr[low] <= arr[mid]){
			ans = min(ans,arr[low]);
			low = mid+1;
		}
		else{
			high = mid-1;
			ans =min(ans,arr[mid]);
		}
	}
	return ans;
}
