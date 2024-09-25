// Find the Total Number of Subarrays with Given Sum
// Problem: Given an array of integers and an integer sum , return the total 
// number of subarrays whose sum equals sum .
// Test Case:
// Input: nums = [1, 2, 3, 1, 1, 1], sum = 3
// Output: 4

#include<bits/stdc++.h>
using namespace std;

//brute force approach
int subarraySum2(vector<int>& nums, int k) {
    int sum = 0, count = 0 ;
    for(int i=0;i<nums.size();i++){
        sum = nums[i];
        if(sum==k){
            count++;
        }
        for(int j =i+1;j<nums.size();j++){
            sum += nums[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}

int subarraySum1(vector<int>& nums, int k) {
    int ans = 0;
    vector<int> prefix;
    prefix.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        prefix.push_back(nums[i]+prefix[i-1]);
    }

    unordered_map<int, int> mp;

    for(int m =0;m<prefix.size();m++){
        if(prefix[m]==k){
            ans++;
        }
        if(mp.find(prefix[m]-k) != mp.end()){
            ans += mp[prefix[m]-k];
        }
        mp[prefix[m]]++;
    }
    return ans;
}


int main(){
    vector<int> array = {1, 2, 3, 1, 1, 1};
    int sum = 3;
    cout<<"Count the number of subarrays: " <<subarraySum2(array, sum)<<endl;
    return 0;
}
