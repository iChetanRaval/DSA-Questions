// Problem: Leaders in an array - Code studio
// Problem statement
// Given a sequence of numbers. Find all leaders in sequence. An element is a leader if it is strictly greater than all the elements on its right side.
// Note:
// 1. Rightmost element is always a leader.
// 2. The order of elements in the return sequence must be the same as the given sequence
// Sample Input 1:
// 2
// 6
// 6 7 4 2 5 3
// 4
// 11 10 9 8
// Sample Output 1:
// 7 5 3
// 11 10 9 8
// ------------------code------------------------
#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    // Write your code here.
    vector<int>ans;
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--){
        if(elements[i] > maxi){
            ans.push_back(elements[i]);
        }
        maxi = max(maxi,elements[i]);
    }
    sort(ans.begin(),ans.end(),greater<>());
    return ans;
}
