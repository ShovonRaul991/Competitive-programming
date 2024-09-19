#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,x,k,T;
	cin>>T;
    for(int i=0;i<T;i++)
    {
    	cin>>N>>x>>k;
    	bool arr[N+2];
    	memset(arr, false, sizeof(arr));
    	
		for(int j=0;j<=N;j+=k)
    	{
    		if(j==x)
    		{
    			arr[j]=true;
    			break;
			}
			
		}
		
		for(int j=N+1;j>=0;j-=k)
		{
    		if(j==x)
    		{
    			arr[j]=true;
    			break;
			}	
		}
		for(int k = 0;k<=N;k++)
		{
			if(arr[i]==true)
			{
				cout<<"yes";
				break;
			}
			else
			{
				cout<<"no";
			}
		}
		
	}
}

