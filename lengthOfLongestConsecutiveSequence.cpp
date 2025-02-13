// Longest Consecutive Sequence - Code Studio
// Problem statement 
// You are given an unsorted array/list 'ARR' of 'N' integers. Your task is to return the length of the longest consecutive sequence.

// The consecutive sequence is in the form ['NUM', 'NUM' + 1, 'NUM' + 2, ..., 'NUM' + L] where 'NUM' is the starting integer of the sequence and 'L' + 1 is the length of the sequence.

// Note:

// If there are any duplicates in the given array we will count only one of them in the consecutive sequence.
// Sample Input 1 :
// 1 
// 5
// 33 20 34 30 35
// Sample Output 1 :
// 3
// Explanation to Sample Input 1 :
// The longest consecutive sequence is [33, 34, 35].

// --------------------Code--------------------------

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    if(n==0) return 0;
    int longest = 1;
    unordered_set<int>st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt = cnt+1;
            }
            longest = max(longest,cnt);
        }
    }

    return longest;
}
