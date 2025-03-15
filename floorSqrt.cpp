// Problem statement
// You are given a positive integer ‘n’.
// Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
// Sample Input 1:
// 6
// Sample Output 1:
// 2
// Explanation of Sample Input 1:
// The square root of the given number 6 lies between 2 and 3, so the floor value is 2.

// ------------------------------------------Code---------------------------------------------------

int floorSqrt(int n)
{
    // Write your code here.
    int low = 1;
    int high = n;
    long long ans;
    while(low <= high){
        long long mid = (low+high)/2;
        
        if(mid*mid <= n){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
