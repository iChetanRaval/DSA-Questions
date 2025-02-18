// Problem statement
// You are given an integer N. Your task is to return a 2-D ArrayList containing the pascal’s triangle till the row N.
// A Pascal's triangle is a triangular array constructed by summing adjacent elements in preceding rows. Pascal's triangle contains the values of the binomial coefficient.
// For example, given integer N= 4 then you have to print.
// 1  
// 1 1 
// 1 2 1 
// 1 3 3 1
// Here for the third row, you will see that the second element is the summation of the above two-row elements i.e. 2=1+1, and similarly for row three 3 = 1+2 and 3 = 1+2.
// Sample Input 1 :
// 3
// 1
// 2
// 3
// Sample Output 1 :
// 1
// 1 
// 1 1 
// 1 
// 1 1 
// 1 2 1 

// ---------------------------------Code-----------------------------------------
#include <bits/stdc++.h>

vector<long long int> generateRow(int row){
  long long ans = 1;
  vector<long long int> ansRow;
  ansRow.push_back(1);
  for(int col =1; col<row; col++){
    ans = ans * (row-col);
    ans = ans / (col);
    ansRow.push_back(ans);
  }
  return ansRow;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;
  for(int i=1;i<=n; i++){
    ans.push_back(generateRow(i));
  }
  return ans;
}
