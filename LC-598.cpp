#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int maxCount(int m, int n, vector<vector<int>> ops){
    if(ops.size() == 0){
        return m *n;
    }
    int minRow = m;
    int minCol = n;
    for(int i = 0; i < ops.size(); i++){
        minRow = min(minRow, ops[i][0]);
        minCol = min(minCol, ops[i][1]);
    }
    return minCol * minRow;
}

int main(){
    int m = 3;
    int n = 3;
    vector<vector<int>> ops = {{2,2},{3,3},{3,3},{3,3},{2,2},{3,3},{3,3},{3,3},{2,2},{3,3},{3,3},{3,3}};
    int ans = maxCount(m, n, ops);
    cout<<ans;
}