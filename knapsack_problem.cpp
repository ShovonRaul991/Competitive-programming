#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int,int>
#define vii vector<pi>
#define repo(i,a,b) for(int i =a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) Builtin_popcount(x)

const int N = 1e5+2, mod = 1e9+7;

int val[N], wt[N];

int knapsack(int n,int w)
{
    if(w<=0)
        return 0;

    if(n<=0)
        return 0;
    
    if(wt[n-1]>w)
        return knapsack(n-1,w);

    return max(knapsack(n-1,w),knapsack(n-1,w-wt[n-1])+val[n-1]);
}

signed main()
{
    int n;
    cin>>n;

    repo(i,0,n)
    {
        cin>>val[i];    
    }    //value array input
    repo(i,0,n)
    {
        cin>>wt[i]; 
    }        //weight array input
    int w;   //knapsack weight
    cin>>w;
    
    cout<<knapsack(n,w)<<endl;
    return 0;
}