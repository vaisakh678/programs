#include <bits/stdc++.h>
#include "utils.hpp"


vector<int> nextPermutation(vector<int>& vec) {
    int n = vec.size(), k, l;
    for(k = n-2; k>=0; k--) if(vec[k]<vec[k+1]) break;
    if(k >= 0){
        for(l = n-1; l>k; l--) if(vec[k]<vec[l]) break;
        swap(vec[l], vec[k]);
        reverse(vec.begin()+k+1, vec.end());
    } else reverse(vec.begin(), vec.end());
    return vec;
}

int main(){
    // vector<int> vec{1,3,5,4,2};
    vector<int> vec{1,2,3};
    // vector<int> vec{1,3,2};
    printVec(nextPermutation(vec));
}