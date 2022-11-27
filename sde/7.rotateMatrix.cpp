#include <bits/stdc++.h>
#include "utils.hpp"

vector<vector<int>> rotateMatrix(vector<vector<int>> vec){
    for(int row = 0; row<vec.size(); row++)
        for(int col = 0; col<row; col++)
            swap(vec[row][col], vec[col][row]);
    for(int row = 0; row< vec.size(); row++) 
        reverse(vec[row].begin(), vec[row].end());
    return vec;
}

int main(){
    vector<vector<int>> vec{{1,2,3},{4,5,6},{7,8,9}};
    printVec(rotateMatrix(vec));
}