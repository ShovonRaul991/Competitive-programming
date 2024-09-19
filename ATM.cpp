#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int withdrawl;
    double balance;
    cin>>withdrawl>>balance;
    if(withdrawl%5==0)
    {
        if(balance>=withdrawl+0.5)
        {
            std::cout << std::fixed << std::setprecision(2)<<balance-withdrawl-0.50;
        }
        else
        {
            std::cout << std::fixed << std::setprecision(2) <<balance;
        }
    }
    else{
        std::cout << std::fixed << std::setprecision(2) <<balance;
    }
    
}
