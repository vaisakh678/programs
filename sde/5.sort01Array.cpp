#include <bits/stdc++.h>
#include "utils.hpp"

vector<int> sortZeroOne(vector<int> vec){
    int l = 0, m = 0, h = vec.size()-1;
    while(m<=h){
        switch(vec[m]){
            case 0:
                swap(vec[l++], vec[m++]);
                break;
            case 1:
                m++;
                break;
            case 2:
                swap(vec[m], vec[h--]);
                break;
        }
    }
    
    cout<<l<<m<<h<<endl;
    return vec;
}

int main(){
    vector<int> vec{2,0,2,1,1,0};
    printVec(sortZeroOne(vec));
}