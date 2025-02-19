// Problem statement
// You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.
// An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.
// Sample Input 1:
// 1
// 5
// 10 5 5 5 2
// 12
// Sample Output 1:
// 5 5 2
// Explanation for Sample Input 1:
// 5 5 2 is the only triplet that adds up to 12. Note that the order of the output doesn’t matter, so 5 2 5 or 2 5 5 is also acceptable.

// --------------------------Code----------------------------------

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0; i<n; i++){
		if(i !=0 && arr[i] == arr[i-1]){
			continue;
		}
		int j=i+1;
		int k=n-1;

		while(j < k){
			int sum = arr[i];
			sum += arr[j];
			sum +=arr[k];

			if(sum < K){
				j++;
			}
			else if(sum > K){
				k--;
			}
			else{
				ans.push_back({arr[i],arr[j],arr[k]});
				j++;
				k--;

				while(j < k && arr[j] == arr[j-1]) j++;
				while(j < k && arr[k] == arr[k+1]) k--;
			}
		}
	}
	return ans;
}
