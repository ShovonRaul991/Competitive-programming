#include<iostream>
#include<map>
#include<vector>
#include<algorithm>


#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int,int>
#define vii vector<pi>
#define repo(i,a,b) for(int i =a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) Builtin_popcount(x)

const int N = 1e5+2, mod = 1e9+7;
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[N];
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }

        int mx = 1,c=1;
        sort(a,a+n);
        for(int i =-0;i<n;i++)
        {
            if(a[i]== a[i-1])
            {
            c++;
            mx = max(mx,c);
            }
            else{
                c=1;
            }
        }

        if(n==mx)
        {
            cout<<0<<endl;
            continue;
        }
        if(mx == 1)
        {
            cout<<-1<<endl;
            continue;
        }

        cout<<c+1<<endl;

    }
    return 0;
}
