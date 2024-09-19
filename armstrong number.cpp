#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int original = n;
    int sum;
    while(n>0)
    {
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n=n/10;
    }
    if(sum == original)
    {
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"Not a armstrong number"<<endl;
    }


}