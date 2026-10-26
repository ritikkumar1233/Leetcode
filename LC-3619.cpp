#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int countIslands(vector<vector<int>>& grid, int k){
    int m = grid.size();
    int n = grid[0].size();
    int count = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] > 0){
                if(grid[i][j] == 0 || grid[i][j] == 0 || grid[i][j] == 0 || grid[i][j] == 0)
                ans = grid[i][j];
            }
        }
    }
}

int main(){
    vector<vector<int>> grid = {{0,2,1,0,0},{0,5,0,0,5},{0,0,1,0,0},{0,1,4,7,0},{0,2,0,0,8}};
    int k = 5;
    int ans = countIslands(grid, k);
    cout<<ans;
}