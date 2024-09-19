#include<iostream>
using namespace std;

int bin_deci(int n)
{
    int ans = 0;
    int x = 1;
    while(n>0)
    {
        int last_digit = n%10;
        ans += x*last_digit;
        x*=2;
        n/=10;
    }
    return ans;

}
int32_t main()
{
      int n;
      cin>>n;

      cout<<bin_deci(n)<<endl;
}