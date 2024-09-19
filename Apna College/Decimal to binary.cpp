#include<bits/stdc++.h>
using namespace std;

int deci_bin(int n)
{
    int x = 1;
    int ans = 0;
    while(x <= n)
        x *= 2;   //x = 8, n = 12 then x will become 16 
                  //but we need 8 so.. follow
    x/=2;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;    //removing the extructed data
        x/= 2;
        ans = ans *10 + lastDigit;
    }
    return ans;
}
int32_t main()
{
      int n;
      cin>>n;

      cout<<deci_bin(n)<<endl;
}