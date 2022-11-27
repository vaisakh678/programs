#include <bits/stdc++.h>
#include "utils.hpp"

vector<vector<int>> generateTriangle(int lim){
    vector<vector<int>> triangle(lim);
    for(int i=0; i<triangle.size(); i++){
        triangle[i].resize(i+1, 1);
        for(int j=1; j<i; j++){
            triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
        }
    }
    return triangle;
}

int main(){
    printMatrix(generateTriangle(10));
}