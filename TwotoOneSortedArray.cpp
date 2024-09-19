#include<bits/stdc++.h>

using namespace std;

vector<int> mergeTwoArray(int *a, int size_a, int *b, int size_b){

    vector<int> mergedArray;

    map<int, int> mp;

    for(int i =0;i<size_a; i++){
        mp[a[i]]++;
    }

    for(int j =0;j<size_b; j++){
        mp[b[j]]++;
    }

    for(auto& x: mp){
        for(int k=0;k<x.second;k++){
            mergedArray.push_back(x.first);
        }
    }
    return mergedArray;

}

int main(){

    int arr1[] = {1, 3, 5, 2};
    int arr2[] = {2, 4, 6, 8, 9};
    vector<int> merged = mergeTwoArray(arr1, 4, arr2, 5);
    for(auto x: merged){
        cout<<x<<" ";
    }
    return 0;
}