// Sort Array Based on Risk Levels
// Problem: Given an array of risk levels (integers ranging from 0 to 2), 
// sort the array based on these risk levels.
// Test Case:
// Input: riskLevels = [2, 0, 1, 2, 1, 0]
// Output: [0, 0, 1, 1, 2, 2]

#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int&b){
    a = a^b;
    b = a^b;
    a = a^b;
}

void sortArrayOnLevels(vector<int>& array){
    int i =0, j = 0, k = array.size()-1;
    while(j<=k){
        if(array[j]==0){
            swap(array[i], array[j]);
            i++;
            j++;
        }
        else if(array[j]==1){
            j++;
        }
        else{
            swap(array[j], array[k]);
            k--;
        }
    }
}

void printArray(vector<int> array){
    for(int i =0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> numberTypes = {2, 0, 1, 2, 1, 0};
    printArray(numberTypes);
    sortArrayOnLevels(numberTypes);
    printArray(numberTypes);
}