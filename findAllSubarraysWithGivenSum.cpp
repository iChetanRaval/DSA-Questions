// Problem statement
// You are given an integer array 'arr' of size 'N' and an integer 'K'.

// Your task is to find the total number of subarrays of the given array whose sum of elements is equal to k.
// A subarray is defined as a contiguous block of elements in the array.
// Example:
// Input: ‘N’ = 4, ‘arr’ = [3, 1, 2, 4], 'K' = 6
// Output: 2
// Explanation: The subarrays that sum up to '6' are: [3, 1, 2], and [2, 4].
// Sample Input 1:
// 2
// 4 6
// 3 1 2 4

// 3 3
// 1 2 3
// Sample output 1:
// 2
// 2

// -------------------------------------Code-----------------------------------------------
  
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    map<int,int>mp;
    mp[0] = 1;
    int preSum = 0;
    int cnt = 0;

    for(int i=0; i<arr.size(); i++){
        preSum +=arr[i];
        int removeElement = preSum-k;
        cnt +=mp[removeElement];
        mp[preSum] +=1;
    }
    return cnt;
}
