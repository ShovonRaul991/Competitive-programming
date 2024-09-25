// Find the Subarray with the Largest Sum
// Problem: Given an integer array nums , find the subarray with the largest 
// sum and return its sum.
// Test Case:
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6

#include<bits/stdc++.h>
using namespace std;

int solveTabulationMaxSubArray1(vector<int>& array) {
    int N = array.size();
    if (N == 0) return 0; // Handle the case of an empty array

    int max_current = array[0];
    int max_global = array[0];

    for (int i = 1; i < N; i++) {
        max_current = max(array[i], max_current + array[i]);
        max_global = max(max_global, max_current);
    }

    return max_global; // Return the maximum subarray sum
}

//error in the code
int solveTabulationMaxSubArray(vector<int>& array){
    int N = array.size();
    vector<vector<int>> dp(2, vector<int>(N));
    dp[0][0] = dp[1][0] = array[0];
    for(int i =0;i<N;i++){
        dp[1][i] = max(array[i], array[i]+dp[1][i-1]);
        dp[0][i] = max(dp[0][i-1], dp[1][i]);
    }
    return dp[0][N-1];
}

int main(){
    vector<int> array = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<solveTabulationMaxSubArray1(array);
    return 0;
}