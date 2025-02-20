// Problem statement
// Given an array of integers ‘ARR’ and an integer ‘X’, you are supposed to find the number of subarrays of 'ARR' which have bitwise XOR of the elements equal to 'X'.
// Note:
// An array ‘B’ is a subarray of an array ‘A’ if ‘B’ that can be obtained by deletion of, several elements(possibly none) from the start of ‘A’ and several elements(possibly none) from the end of ‘A’. 
// Sample Input 1 :
// 2
// 5 8
// 5 3 8 3 10
// 3 7
// 5 2 9
// Sample Output 1 :
// 2
// 1
// Explanation of Sample Input 1 :
// In the first test case, the subarray from index 1 to index 3 i.e. {3,8,3} and the subarray from index 2 to index 2 i.e. {8} have bitwise XOR equal to 8.
// In the second test case, the subarray from index 0 to index 1 i.e. {5,2} has bitwise XOR equal to 7.

// -----------------------------Code---------------------------------------

#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int xr = 0;
    unordered_map<int,int> mpp;
    mpp[xr]++;
    int cnt =0;
    for(int i=0;i<arr.size(); i++){
        xr = xr ^ arr[i];   //formula xr ==> previous elemet ^ current element if x = 6 & arr ={4,2,2,6,4} then 0 ^ 4 = 2
        // x
        int k = xr ^ x;   // by formula k = 2 ^ 6 = 4 store in mapp or increment if already present
        cnt += mpp[k];  // check if 4 present in map or not if present then it is subarray so increment count
        mpp[xr]++;   // store (4,1) in map
    }
    return cnt;
}
