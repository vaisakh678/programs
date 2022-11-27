#include <bits/stdc++.h>
#include "utils.hpp"
using namespace std;

int main(){
    vector<vector<int>> vec = {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
    };

    int col0 = 1;
    for(int i=0; i<vec.size(); i++){
        if (vec[i][0] == 0) col0 = 0;
        for(int j=1; j<vec[i].size(); j++)
            if(vec[i][j] == 0) vec[i][0] = vec[0][j] = 0;
    }
    
    for(int i=vec.size()-1; i>=0; i--){
        for(int j=vec[0].size()-1; j>=1; j--)
            if(vec[i][0] == 0 || vec[0][j] == 0) vec[i][j] = 0;
        if(col0 == 0) vec[i][0] = 0;
        // cout<<vec[i][0]<<" "<<col0<<endl;
    }

    printMatrix(vec);

}

