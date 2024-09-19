#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int DecimalToBinary(int n) {
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   int count = 0;
   //cout<<"Binary form of "<<num<<" is ";
   for (int j = i - 1; j >= 0; j--)
   {
        //cout << binaryNumber[j];
        if(binaryNumber[j]==1)
        {
            count++;
        }
   }
   return count;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double n,sum;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        sum += DecimalToBinary(i);
    }
    cout<<sum;
    return 0;
}