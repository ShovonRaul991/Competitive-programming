#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int c,g;
        cin>>g>>c;
        int result = ((c*c)/(2*g));
        cout<<result<<endl;
    }
    return 0;
}