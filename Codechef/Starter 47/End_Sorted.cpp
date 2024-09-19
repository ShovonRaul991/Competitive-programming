#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int end,st;
        vector<int> v;
        for(int i =0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(a==n)
                end= i;
            else if(a==1)
                st = i;
        }
        if(end<st){
            cout<<(n+1-(end+1))+(st)-1-1<<endl; 
        }
        else
        {
            cout<<(n+1-(end+1))+(st)-1<<endl;
        }

    }
    return 0;
}