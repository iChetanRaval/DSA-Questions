// Problem statement
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
// Sample Input 1:
// 8 2
// 0 0 1 1 2 2 2 2
// Sample output 1:
// 4 7
// Explanation of Sample output 1:
// For this testcase the first occurrence of 2 in at index 4 and last occurrence is at index 7.

----------------------------Code------------------------------

#include <bits/stdc++.h> 
int firstOccuerence(vector<int>& arr,int n, int k){
    int low = 0;
    int high = n-1;
    int first = -1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }
    return first;
}
int lastOccurence(vector<int>& arr,int n, int k){
    int low = 0;
    int high = n-1;
    int last = -1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }
    return last;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first = firstOccuerence(arr,n,k);
    if(first == -1) return {-1,-1};
    int last = lastOccurence(arr,n,k);
    return {first,last};
}
