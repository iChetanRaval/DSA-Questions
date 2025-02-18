// Given an array/list of length ‘N’, you are supposed to return the majority element of the array/list.
// The majority element is the element that appears more than floor(N/2) times in the given array/list.
// Note:
// You may assume that the given array/list is non-empty and the majority element always exists in the array.
// Sample Input 1:
// 2
// 3
// 1 2 2
// 5
// 4 2 1 4 4
// Sample Output 1:
// 2
// 4
// Explanation to Sample Input 1:
// In the first test case, the floor(N/2) is 1, and there is only one element, i.e. 2 whose occurrence is 2, which is greater than 1. No other elements have occurrence greater than 1.

// ----------------------------------Code----------------------------------------------
#include <bits/stdc++.h> 
int majorityElement(vector<int> &nums)
{
    //    Write your code here.
    int n=nums.size();
    unordered_map<int,int> mp;
    for(auto i:nums){
        mp[i]++;
    }
    for(auto i:mp){
        if(i.second>(n/2))
        return i.first;
    }
    return -1;
}
