//Initial Template for C++
//Time complexity O(n)


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);
void rvereseArray(int arr[], int start, int end);  //retursive function


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  int start=0,end=str.length()-1;
  while(start<=end)
  {
  char temp= str[start];
  str[start]=str[end];
  str[end]=temp;
  start++;
  end--;
  }
  return str;
}

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}    
