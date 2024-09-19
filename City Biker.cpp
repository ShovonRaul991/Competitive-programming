#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,s=0,max =0;
    cin>>n;
    int arr[n-1];
    //sum[0] = 0;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n;i++)
    {
        //cout<<arr[i]<<endl;;
        
        s += arr[i];
        //cout<<s<<endl;
        if(s>max)
            max = s;
        
    }
    if(max>0)
        cout<<max;
    else
        cout<<0;
    return 0;
}