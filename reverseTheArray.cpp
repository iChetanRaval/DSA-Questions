// Problem statement
// Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.
// Example:
// We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
// based indexing so the subarray {5, 6} will be reversed and our 
// output array will be {1, 2, 3, 4, 6, 5}.
// Sample Input 1:
// 2
// 6 3
// 1 2 3 4 5 6
// 5 2
// 10 9 8 7 6
// Sample Output 1:
// 1 2 3 4 6 5
// 10 9 8 6 7

// ------------------------------------------Code------------------------------------------

#include<bits/stdc++.h>
void reverseArray(std::vector<int> &arr, int m) {
    // Initialize two pointers: one at m + 1 and the other at the last element
    int start = m + 1;
    int end = arr.size() - 1;

    // Swap elements using the two pointers until they meet
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
