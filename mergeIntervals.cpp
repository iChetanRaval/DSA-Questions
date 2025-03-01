// Problem statement
// Given 'N' number of intervals, where each interval contains two integers denoting the boundaries of the interval. The task is to merge all the overlapping intervals and return the list of merged intervals sorted in ascending order.
// Two intervals will be considered to be overlapping if the starting integer of one interval is less than or equal to the finishing integer of another interval, and greater than or equal to the starting integer of that interval.
// Sample Input 1:
// 1
// 2
// 1 3
// 3 5
// Sample Output 1:
// 1 5  
// Explanation for Sample Input 1
// Since these two intervals overlap at point 3 so we merge them and the new interval becomes (1,5).

// ------------------------------Code----------------------------------

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> intervals)
{
    // Write your code here'
    int n = intervals.size();
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;

    for(int i=0; i<n; i++){
        int start = intervals[i][0];
        int end = intervals[i][1];
        if(!ans.empty() && end <= ans.back()[1]){
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(intervals[j][0] <= end){
                end = max(end,intervals[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    return ans;
}
