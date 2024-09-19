/*Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.
*/
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
    long long N;
    cin>>N;
    int zero=0;
    for(int i=5;N/i>=1;i=i*5)
    {
        zero += N/i;
    }
    cout<<zero;
    
}