// Find Count of Elements Greater Than All Prior Elements
// Problem: Given an integer array Arr , find the count of elements whose 
// value is greater than all of its prior elements.
// Test Case:
// Input: Arr = [7,4,8,2,9]
// Output: 3

#include<bits/stdc++.h>
using namespace std;

int countNumbers(vector<int>& array){

    int max = array[0], count = 1;
    for(int i =1;i<array.size();i++){
        if(array[i]>max){
            count++;
            max = array[i];
        }
    }
    return count;
}

int main(){
    vector<int> array = {7,4,8,2,6,9};
    cout<<countNumbers(array)<<" ";
}