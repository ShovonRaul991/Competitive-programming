// Round Table Seating Arrangement with Constraints
// Problem: Given N members sitting around a circular table, find the 
// possible number of ways to arrange them such that the president and 
// prime minister of India are always seated next to each other.
// Test Case:
// Input: N = 5
// Output: 48

#include<bits/stdc++.h>
using namespace std;

long long int factorial(int x){
    if(x == 0 || x == 1)
        return 1;
    long long int result= 1;
    for(int i= 2; i<=x;i++){
        result = result*i;
    }
    return result;
}

// Number of ways to arrange the remaining 
// N−2=3 members and the president-prime minister block:
// (N−2)!=3!=6
// Number of ways to arrange the president and prime minister within the block:
// 2!=2
// Total number of arrangements:
// 6×2=12
// Multiply by the number of ways to arrange the other members:
// 12×4=48

int main(){
    int numberOfPeople;
    cin>>numberOfPeople;
    if(numberOfPeople<2) return 0;
    cout<<2*factorial(numberOfPeople-2)*(numberOfPeople-1)<<" ";
    return 0;
}