#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int res1 = 7*x;
        int res2 = ((d*y)+(7-d)*z);
        if(res1>res2)
        {
            cout<<res1<<endl;
        }
        else
        {
            cout<<res2<<endl;
        }
    }
    return 0;
}