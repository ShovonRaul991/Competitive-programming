// Add an Element to an Array
// Problem: Add a new element to the end of an array.
// Test Case:
// Input: arr = [1, 2, 3], element = 4
// Output: [1, 2, 3, 4]

#include<bits/stdc++.h>
using namespace std;

void addElementToArray(vector<int>& a, int element){
    a.push_back(element);
}

int main(){
    vector<int> array = {1, 2, 3};
    addElementToArray(array, 4);
    for(auto x: array){
        cout<<x<<" ";
    }
}