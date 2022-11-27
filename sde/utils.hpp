#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> vec){
    for(auto ve: vec){
        for(auto i: ve)     
            cout<<i<<" ";
        cout<<"\n";
    }
}

void printVec(vector<int> vec){
    for(auto i: vec)
        cout<<i<<" ";
    cout<<"\n";
}

// void swap(vector<int> &vec, int idx, int idx1){
//     int tmp = vec[idx];
//     vec[idx] = vec[idx1];
//     vec[idx1] = tmp;
// }



