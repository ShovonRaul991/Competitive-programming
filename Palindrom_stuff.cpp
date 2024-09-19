#include<bits/stdc++.h>
using namespace std;

void print_all_substring(string s){
    
    int n = s.length();
    int dArray[n][n] = {0};
    for(int length=2;length<n+1;length++){
        for(int i =0;i<n-length+1;i++){
            int j = i+length-1;
            
            cout<<i<<" "<<j<<" "<<s.substr(i,j-i+1)<<endl;
        }
        cout<<endl<<length<<" Completed"<<endl;
    }
}

int main(){
    string a = "anatbwe";
    print_all_substring(a);
    return 0;
}