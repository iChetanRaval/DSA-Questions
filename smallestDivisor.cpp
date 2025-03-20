// Problem statement
// You are given an array of integers 'arr' and an integer 'limit'.
// Your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given integer's limit.
// Note:
// Each result of the division is rounded to the nearest integer greater than or equal to that element. For Example, 7/3 = 3.
// Sample Input 1 :
// 5
// 1 2 3 4 5
// 8  
// Sample Output 1 :
// 3
// Explanation for Sample Input 1 :
// We can get a sum of 15(1 + 2 + 3 + 4 + 5) if we choose 1 as a divisor. 
// The sum is 9(1 + 1 + 2 + 2 + 3)  if we choose 2 as a divisor, and the sum is 7(1 + 1 + 1 + 2 + 2) if we choose 3 as a divisor, which is less than the 'limit'.
// Hence we return 3.

int sumOfDiv(vector<int>& arr,int div){
	int sum = 0;
	int n = arr.size();
	for(int i=0; i<n; i++){
		sum = sum + ceil((double)(arr[i])/(double)(div));
	}
	return sum;
}
int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int low = 1;
	int high = *max_element(arr.begin(),arr.end());
	int ans = -1;

	while(low <= high){
		int mid = (low+high)/2;
		if(sumOfDiv(arr,mid) <= limit){
			ans = mid;
			high = mid-1;
		}
		else low = mid+1;
	}
}
