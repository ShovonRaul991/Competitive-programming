#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int N;
    cin>>N;
    if(N%4 ==1 || N%4==2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        vector<int> set1, set2;
        int start = 1;
        if(N%4==3)
        {
            set1.push_back(1);
            set1.push_back(2);

            set2.push_back(3);

            start += 3;
            N -=3;
        }

        for(ll i = 0; i<(N/4); i++)
        {
            set1.push_back(start);
            set1.push_back(start+3);

            set2.push_back(start+1);
            set2.push_back(start+2);

            start += 4;
        }

        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(ll x = 0;x<set1.size();x++)
        {
            cout<<set1[x]<<" ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(ll x = 0;x<set2.size();x++)
        {
            cout<<set2[x]<<" ";
        }

    }
    return 0;

}