// Problem: Next Permutation---Code studio
// Problem statement
// You have been given a permutation of ‘N’ integers. A sequence of ‘N’ integers is called a permutation if it contains all integers from 1 to ‘N’ exactly once. Your task is to rearrange the numbers and generate the lexicographically next greater permutation.
// To determine which of the two permutations is lexicographically smaller, we compare their first elements of both permutations. If they are equal — compare the second, and so on. If we have two permutations X and Y, then X is lexicographically smaller if X[i] < Y[i], where ‘i’ is the first index in which the permutations X and Y differ.
// For example, [2, 1, 3, 4] is lexicographically smaller than [2, 1, 4, 3].

// Sample Input 1:
// 2
// 3
// 1 2 3
// 5
// 2 3 1 4 5
// Sample Output 1:
// 1 3 2
// 2 3 1 5 4
// Explanation of sample input 1:
// In the first test case, the lexicographically next greater permutation is [1, 3, 2].
// In the second test case, the lexicographically next greater permutation is [2, 3, 1, 4, 5].

// -------------------Code------------------------
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int ind = -1;
    for(int i=n-2; i>=0; i--){
        if(permutation[i] < permutation[i+1]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    for(int i=n-1; i>ind; i--){
        if(permutation[i] > permutation[ind]){
            swap(permutation[i],permutation[ind]);
            break;
        }
    }
    reverse(permutation.begin()+ind+1,permutation.end());
    return permutation;
}
