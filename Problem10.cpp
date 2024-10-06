// Sum of Elements in a Given Array
// Problem: Calculate the sum of all elements in an array.
// Test Case:
// Input: arr = [1, 2, 3, 4]
// Output: 10

#include<bits/stdc++.h>
using namespace std;

int sumOfArray(vector<int>& array){
    int n = array.size();
    int sum = 0;
    for(int i =0;i<n;i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    vector<int> array = {1, 2, 3, 4};
    cout<<sumOfArray(array)<<endl;
    return 0;
}