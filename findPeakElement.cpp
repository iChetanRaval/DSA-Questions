// Problem statement
// You are given an array 'arr' of length 'n'. Find the index(0-based) of a peak element in the array. If there are multiple peak numbers, return the index of any peak number.
// Peak element is defined as that element that is greater than both of its neighbors. If 'arr[i]' is the peak element, 'arr[i - 1]' < 'arr[i]' and 'arr[i + 1]' < 'arr[i]'.
// Assume 'arr[-1]' and 'arr[n]' as negative infinity.
// Sample Input 1:
// 5
// 1 8 1 5 3

// Expected Answer:
// 1
// Output on Console:
// True

// -----------------------------------Code----------------------------------------

int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n = arr.size();
    if(n==1) return 0;
    if(arr[0] > arr[1]) return 0;
    if(arr[n-1] > arr[n-2]) return n-1;

    int low = 1;
    int high = n-2;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid] > arr[mid-1]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}
