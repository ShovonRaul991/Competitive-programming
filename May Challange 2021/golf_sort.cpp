#include<iostream>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
		int N,x,k;
		cin>>N>>x>>k;
		N=N+1;
		if(x%k==0)
		{
			cout<<"Yes"<<endl;
		}
		else if((N-x)%k==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}
