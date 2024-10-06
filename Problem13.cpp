// Problem: Move all zeros in an array to the end while maintaining the 
// order of non-zero elements.
// Test Case:
// Input: arr = [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]


#include<bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& array){
    int nonZeroIndex = 0;
    for(int i =0; i< array.size(); i++){
        if(array[i]!=0){
            array[nonZeroIndex] = array[i];
            nonZeroIndex++;
        }
        
    }
    for(int i = nonZeroIndex; i<array.size(); i++){
        array[i]=0;
    }
}

int main(){
    vector<int> array = {0, 1, 0, 3, 12};
    moveZeroes(array);
    for(auto a: array){
        cout<<a<<" ";
    }
    return 0;
}