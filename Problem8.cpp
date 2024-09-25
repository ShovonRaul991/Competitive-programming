// Two Sum
// Problem: Find two numbers in an array that add up to a specific target.
// Test Case:
// Input: nums = [2, 7, 11, 15], target = 9
// Output: [0, 1]

#include<bits/stdc++.h>

using namespace std;

vector<int> TwoSum(vector<int>& array, int target){
    vector<int> result;
    int diff;
    unordered_map<int, int> mp;
    for(int i =0; i<array.size(); i++){
        diff = target - array[i];
        if(mp.find(diff) != mp.end() && mp[diff] != i){
            result.push_back(i);
            result.push_back(mp[diff]);
        }
        mp[array[i]]=i;
    }
    return result;
}

int main(){
    vector<int> question = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = TwoSum(question, target);
    sort(result.begin(), result.end());
    for(auto x: result){
        cout<<x<<" ";
    }
    return 0;
}