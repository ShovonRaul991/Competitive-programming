// Counting Frequencies of Array Elements
// Problem: Count the frequency of each element in an array.
// Test Case:
// Input: arr = [1, 2, 2, 3, 3, 3]
// Output: {1: 1, 2: 2, 3: 3}

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b){
    return a.first<b.first;
}

unordered_map<int,int> ArrayFrequency(vector<int>&array){
    unordered_map<int, int> mp;
    for(int i=0;i<array.size(); i++){
        mp[array[i]]++;
    }
    return mp;
}

int main(){
    vector<int> array = {1, 2, 2, 3, 3, 3};
    unordered_map<int, int> result = ArrayFrequency(array);

    vector<pair<int, int>> pairResult;
    for(auto hi: result){
        pairResult.push_back(hi);
    }
    sort(pairResult.begin(), pairResult.end(),compare);


    for(auto x: pairResult){
        cout<< x.first<<": "<<x.second<<endl;
    }
}