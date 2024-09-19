#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long D,d,P,Q,dollar = 0;
        cin>>D>>d>>P>>Q;
        if(D%d==0)
        {
            long long z = D/d;
            long long result = P*d*z + Q*d*z*(z-1)/2;
            cout<<result<<endl;
        }
        else
        {
            long long z = D/d;
            long long result = P*d*z + Q*d*z*(z-1)/2;
            long long x= D%d;
            long long result1 = x*(P + Q*z);
            cout<<result+ result1<<endl;

        }
        

    }
}