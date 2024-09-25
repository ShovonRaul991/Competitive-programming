// Rotate a Matrix by 90 Degrees in Clockwise Direction
// Problem: Given an n x n matrix, rotate the matrix by 90 degrees in the 
// clockwise direction. The rotation should be done in-place.
// Test Case:
// Input: matrix = [[1,2,3], [4,5,6], [7,8,9]]
// Output: [[7,4,1], [8,5,2], [9,6,3]]

#include<bits/stdc++.h>
using namespace std;

void rotate90Matrix(vector<vector<int>>& matrix){
    cout<<"No rotation: "<<endl;

    for(int i=0; i<matrix.size(); i++){
        for(int j =0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<matrix.size(); i++){
        for(int j =0; j<i; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    cout<<"After first rotation: "<<endl;

    for(int i=0; i<matrix.size(); i++){
        for(int j =0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<matrix.size(); i++){
        for(int j =0; j<matrix.size()/2; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][matrix.size()-j-1];
            matrix[i][matrix.size()-j-1] = temp;
        }
    }

    cout<<"After second rotation: "<<endl;

    for(int i=0; i<matrix.size(); i++){
        for(int j =0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

//This should be a square matrix
int main(){
    vector<vector<int>> Matrix = {{1,2,3},{4,5,6}, {7,8,9}};
    rotate90Matrix(Matrix);
}