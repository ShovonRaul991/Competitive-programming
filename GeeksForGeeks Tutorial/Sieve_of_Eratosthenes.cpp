#include<iostream>
using namespace std;

void sieveOfEratoshenis(int n)
{
    //boolean array initialization with true
    bool Prime[20] = {true};
    
    for(int i =2;i*i<n;i++)
    {
        if(Prime[i]==true)
        {
            for(int j =i*i;j<=n;j+=i)
            {
                Prime[j]=false;
            }
        }
    }

    // Print all prime numbers 
    for(int k =2;k<n;k++)
    {
        if(Prime[k]==true)
        {
            cout<<"x ";
            cout<<k<<" ";
        }
    }

}

int main()
{
    int n;
    cout<<"Enter the number below which want to find the prime numners: ";
    cin>>n;
    cout<<"Following are the prime numbers: "<<endl;
    sieveOfEratoshenis(n);
    return 0;
}