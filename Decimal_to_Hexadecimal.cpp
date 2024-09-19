#include<bits/stdc++.h>
using namespace std;

string deci_hex(int n)
{
    int x = 1;
    string ans = "";
    while(x <= n)
        x *= 16;   //x = 8, n = 12 then x will become 16 
                  //but we need 8 so.. follow
    x/=16;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;    //removing the extructed data
        x/= 16;
        if(lastDigit <= 9)
         ans = ans + to_string(lastDigit);
        else
            {
                char c = 'A' + lastDigit- 10;
                ans.push_back(c);
            }
    }
    return ans;
}
int32_t main()
{
      int n;
      cin>>n;

      cout<<deci_hex(n)<<endl;
}