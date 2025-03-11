// Problem statement
// You are given an array 'arr' having 'n' distinct integers sorted in ascending order. The array is right rotated 'r' times
// Find the minimum value of 'r'.
// Right rotating an array means shifting the element at 'ith' index to (‘i+1') mod 'n' index, for all 'i' from 0 to ‘n-1'.
// Sample Input 1:
// 4
// 2 3 4 1
// Sample Output 1:
// 3   

// -------------------------------------------Code-------------------------------------------

#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here.  
    int low = 0;
    int high = arr.size()-1;
    int ans = INT_MAX;
    int index = -1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[low]<= arr[high]){
            if(arr[low] < ans){
                index = low;
                ans = arr[low];
            }
            break;
        }
        if(arr[low] <= arr[mid]){
            if(arr[low] < ans){
                index = low;
                ans = arr[low];
            }
            low = mid+1;
        }
        else{
            high = mid-1;
            if(arr[mid] < ans){
                index = mid;
                ans = arr[mid];
            }
        }
    }  
    return index;
}
