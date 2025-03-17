// Problem statement
// You are given two positive integers 'n' and 'm'. You have to return the 'nth' root of 'm', i.e. 'm(1/n)'. If the 'nth root is not an integer, return -1.
// Note:
// 'nth' root of an integer 'm' is a number, which, when raised to the power 'n', gives 'm' as a result.
// Sample Input 1:
// 3 27
// Sample Output 1:
// 3
// Explanation For Sample Input 1:
// 3rd Root of 27 is 3, as (3)^3 equals 27.

// return 1 if ==m
// return 0 if <m
// return  2 if >m

int func(int mid,int n, int m){
  long long ans = 1;
  for(int i=1; i<=n; i++){
    ans = ans * mid;
    if(ans > m) return 2;
  }
  if(ans == m) return 1;
  return 0;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int low = 1;
  int high = m;

  while(low<=high){
    int mid = (low+high)/2;
    int midN = func(mid,n,m);

    if(midN == 1){
      return mid;
    }
    else if(midN == 0) low = mid+1;
    else high = mid -1;
  }
  return -1;
}
