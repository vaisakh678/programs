#include <bits/stdc++.h>
#include "utils.hpp"
using namespace std;

int main(){
    vector<int> vec{-2,1,-3,4,-1,2,1,-5,4};

    int max = INT_MIN, sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum > max) max = sum;
        if (sum < 0) sum = 0;
    }
    cout<<max<<endl;
}

