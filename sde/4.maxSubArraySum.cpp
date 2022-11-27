#include <bits/stdc++.h>
#include "utils.hpp"

int maxSubArraySum(vector<int> vec){
    int max = vec[0], sum= 0;
    for(auto i: vec){
        sum+=i;
        if(max < sum) max = sum;
        if(sum < 0) sum = 0;
    }
    return max;
}


vector<int> maxSubArray(vector<int> vec){
    int max = vec[0], sum= 0;
    int start = 0, end = 0;
    for(int i=0; i<vec.size(); i++){
        sum+=vec[i];
        if(max < sum){
            max = sum;
            end = i;
        }
        if(sum < 0){
            sum = 0;
            start = i+1;
        }
    }
    vector<int> tmp(vec.begin()+start, vec.begin()+end+1);
    return tmp;
}


int main(){
    vector<int> vec{-2,1,-3,4,-1,2,1,-5,4};
    // op 6
    cout<<maxSubArraySum(vec)<<endl;
    printVec(maxSubArray(vec));
}


