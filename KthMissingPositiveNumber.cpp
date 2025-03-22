// Problem statement
// You are given a strictly increasing array 'vec' and a positive integer 'k'.
// Find the 'kth' positive integer missing from 'vec'.
// Example :
// Input: vec = [2,4,5,7] , k = 3
// Output: 6

// Sample Input 1 :
// 4
// 4 7 9 10
// 1

// Sample Output 1 :
// 1

// ----------------------------------------Code-------------------------------------------

int missingK(vector < int > vec, int n, int k) {
    // Write your code here.
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        int missing = vec[mid] - (mid+1);
        if(missing < k){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return k+high+1;
}
