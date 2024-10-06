// Pascal's Triangle
// Problem: Generate the first few rows of Pascal's Triangle.
// Test Case:
// Input: numRows = 5
// Output: [[1], [1,1], [1,2,1], [1,3,3,1], [1,4,6,4,1]]

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> createPascalTriangle(int row){
    vector<vector<int>> triangle;


    for (int i = 0; i < row; i++) {
        vector<int> rowArray(i + 1, 1); // Initialize row with 1's
        cout<<"\nThe RowArray is: : "<<endl;
        for(auto m: rowArray){
                cout<<m<<" ";
            }
            cout<<endl;
        
        for (int j = 1; j < i; j++) {
            cout << "triangle[" << i - 1 << "][" << j - 1 << "] = " << triangle[i - 1][j - 1] << " ";
            cout << "triangle[" << i - 1 << "][" << j << "] = " << triangle[i - 1][j] << endl;
            rowArray[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            cout<<"rowArray["<<j<<"] = "<<rowArray[j]<<endl;
        }
    triangle.push_back(rowArray); // Add the row to the triangle
    cout<<"\nThe result I got iteration running the code is: "<<endl;
        for(auto x: triangle){
            for(auto y: x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }
    return triangle;
}

int main(){
    int n = 5;
    vector<vector<int>> result = createPascalTriangle(n);

    cout<<"\nThe result I got is: "<<endl;
    for(auto x: result){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}