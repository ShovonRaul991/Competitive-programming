#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[2][n-1],result[n-1];
    for(int j =0;j<n;j++)
    {
        cin>>arr[0][j]>>arr[1][j];
        if(arr[0][j]>arr[1][j])
        {
            result[j]=arr[1][j];
        }
        else
        {
            result[j]=arr[0][j];
        }
    }
    int count =0,max =0;
    for(int i =0;i<n;i++)
    {
        if(result[i]>max)
            max=result[i];
    }

    for(int i =0;i<n;i++)
    {
        if(result[i]==max)
            count++;
    }
    cout<<count;
    
    return 0;
}