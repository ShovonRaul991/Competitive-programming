#include<bits/stdc++.h>
using namespace std;
int cpuTaskScheduler(int n, vector<vector<int>> arr) {
    sort(arr.begin(),arr.end());
    int ans=1;
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(arr[0][1]);
    for(int i=1;i<n;i++)
    {
        if(arr[i][0]>=pq.top())
        {
            pq.pop();
        }
        else
        {
            ans++;
        }
        pq.push(arr[i][1]);
    }
    return ans;
   // Write your code here
}
   int main()
   {
    int n;
    cin>>n;
    vector<vector<int>> arr1(n);
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<2;j++)
        {
            int x;
            cin>>x;
            arr1[i].push_back(x);
        }
    }
    
    int result= cpuTaskScheduler(n,arr1);
    cout<<result<<endl;
   }

