#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    
    while(n--)
    {
        int arr[3];
        int sum=0,k = 0;
        for(int i =0;i<3;i++)
        {
            cin>>arr[i];
            if(arr[i]<10)
            {
                k++;
                //break; //error
            }
            sum+= arr[i];
        }

        //cout<<k<<endl;
        //cout<<sum<<endl;

        
        if(sum<100 || k>0)
        {
            cout<<"FAIL"<<endl;
        }
        else
        {
            cout<<"PASS"<<endl;
        }
        
    }
}
