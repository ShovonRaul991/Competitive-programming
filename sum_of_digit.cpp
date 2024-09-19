#include<iostream>
using namespace std;

int Sum_of_digit(int n)
{
	/*
	int sum;
	for (sum = 0; n > 0; sum += n % 10, n /= 10)
            ;
	return sum;
	*/
	
	//Recursive solution in one line
	return n == 0 ? 0 : n % 10 + Sum_of_digit(n / 10);  
}

int main(){
	int number;
	cin>>number;
	cout<<Sum_of_digit(number);
	return 0;
}
