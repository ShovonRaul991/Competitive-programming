// Remove Duplicates from a String Array
// Problem: Given an array of strings, remove all duplicate strings and 
// return the updated array.
// Test Case:
// Input: arr = ["apple", "banana", "orange", "banana", "apple"]
// Output: ["apple", "banana", "orange"]

#include<bits/stdc++.h>
using namespace std;

vector<string> removeDuplicates(vector<string>& words){
    unordered_map<string, int> wordMap ;

    for(int i=0;i<words.size();i++){
        wordMap[words[i]]++;
    }
    vector<string> removeDuplicates;
    for(auto x: wordMap){
        removeDuplicates.push_back(x.first);
    }
    return removeDuplicates;
}

int main(){
    vector<string> arrayWords = {"apple", "banana", "orange", "banana", "apple"};
    vector<string> result = removeDuplicates(arrayWords);
    sort(result.begin(), result.end());
    for(int i =0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}