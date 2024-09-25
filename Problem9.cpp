// Program to Check if an Array is Sorted or Not
// Problem: Determine if a given array is sorted in non-decreasing order.
// Test Case:
// Input: arr = [1, 2, 3, 4, 5]
// Output: True

#include<bits/stdc++.h>

using namespace std;

bool recursiveCheckIfSort(vector<int> array, int n){
    if(n == 0 || n == 1)
        return true;
    return array[n]>array[n-1] && recursiveCheckIfSort(array, n-2);
}

bool iterativeCheckIfSort(vector<int> array, int n){
    if(n == 0 || n == 1)
        return true;
    for(int i =1; i< n; i++){
        if(array[i]<array[i-1])
            return false;
    }
    return true;
}


int main(){
    vector<int> array = {1, 2, 3, 4, 2};
    cout<<recursiveCheckIfSort(array, array.size())<<endl;
    cout<<iterativeCheckIfSort(array, array.size())<<endl;
    return 0;
}