// Push Empty Packets to the End of the Array
// Problem: Given an array of integer values, find all empty packets 
// (represented by 0 ) and push them to the end of the array.
// Test Case:
// Input: arr = [2, 0, 3, 0, 5]
// Output: [2, 3, 5, 0, 0]

#include<bits/stdc++.h>

using namespace std;

void swap(int& a, int&b){
    a = a^b;
    b = a^b;
    a = a^b;
}


//Important where you are taking the pointer
void sortZeroToLast(vector<int>& list){
    int nonZeroIndex = 0;
    for(int i =0; i<list.size(); i++){
        if(list[i]!=0){
            list[nonZeroIndex] = list[i];
            nonZeroIndex++;
        }
    }

    for(int i = nonZeroIndex; i<list.size(); i++){
        list[i] = 0;
    }
}

void printArray(vector<int> array){
    for(int i =0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> theGivenList = {2, 0, 3, 0, 5};
    printArray(theGivenList);
    sortZeroToLast(theGivenList);
    printArray(theGivenList);
    return 0;
}