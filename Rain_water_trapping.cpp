#include<iostream>
using namespace std;
int maxWater(int arr[],int n)
{
    int res=0; //for storing the total ammount of water
    for(int i =1;i<n-1;i++)
    {
        int left = arr[i];
        for(int j =0;j<i;j++)
        {
            left = max(left,arr[j]);
        }

        int right = arr[i];
        for(int j =i+1;j<n;j++)
        {
            right = max(right,arr[j]);
        }

        res += min(left,right)-arr[i];
    }

    return res;

}
int main()
{
    int a[20] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }; 
    int n = 12; 

    int result = maxWater(a,n);
    cout<<"The total amount of water is: "<<result;
    
    return 0;

}