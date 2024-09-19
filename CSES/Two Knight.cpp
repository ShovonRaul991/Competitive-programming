#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int N;
    cin>>N;
    for(ll x=1;x<= N;x++)
    {
        cout<<((x*x)*((x*x)-1))/2 - (4*(x-1)*(x-2))<<endl;
    }
    return 0;
}