#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

// vector<string> createGrid(int m, int n){
//     vector<string>grid (m, string(n, '#'));
//     for(int i = 0; i < n; i++){
//         grid[0][i] = '.';
//     }
//     for(int j = 0; j < m; j++){
//         grid[j][n-1] = '.';
//     }
//     return grid;
// }

vector<string> createGrid(int m, int n) {
    vector<string>grid(m,string(n,'#'));

    for(int i=0;i<n;i++){
        grid[0][i]='.';
    }
    for(int j=0;j<m;j++){
        grid[j][n-1]='.';
    }
    return grid;
}

int main(){
    int m = 3;
    int n = 3;
    vector<string> ans = createGrid(m, n);
    for(string str : ans){
        cout<<str<<" ";
    }
}