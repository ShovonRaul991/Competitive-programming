#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i =0;i*i<n;i++)
    {
        if(n%i==0)
        a.push_back(i);
    }
    std::cout<<a.size()<<endl;
    for(int i =0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}