// Problem statement
// Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.
// You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.
// Sample Input 1 :
// 4 2
// 10 20 30 40

// Sample Output 1 :
// 60
// Explanation For Sample Input 1 :
// In this test case, we can divide the first 3 boards for one painter and the last board for the second painter.

// ------------------------------------Code-------------------------------------------

#include<bits/stdc++.h>
int countStudent(vector<int> &arr, int pages){
    int students = 1;
    long long pagesStudent = 0;
    for(int i=0; i<arr.size(); i++){
        if(pagesStudent + arr[i] <= pages){
            pagesStudent +=arr[i];
        }
        else{
            students +=1;
            pagesStudent = arr[i];
        }
    }
    return students;
}
int findPages(vector<int> & arr, int n, int m){
    if(m > n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low <= high){
        int mid = (low+high)/2;
        int students = countStudent(arr,mid);
        if(students > m){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    return findPages(boards,boards.size(),k);
}
