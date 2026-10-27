#include<iostream>
#include <vector>
#include <utility>
using namespace std;

int countIslands(vector<vector<int>>& grid, int k) {
    int m = grid.size();
    int n = grid[0].size();
    int ans = 0;

    int dirs[5] = {1, 0, -1, 0, 1};
    vector<pair<int, int>> island;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 0) {
                continue;
            }

            long long total = grid[i][j];
            grid[i][j] = 0;

            island.clear();
            island.push_back(make_pair(i, j));

            for (size_t h = 0; h < island.size(); h++) {
                int x = island[h].first;
                int y = island[h].second;

                for (int d = 0; d < 4; d++) {
                    int a = x + dirs[d];
                    int b = y + dirs[d + 1];

                    if (a >= 0 && a < m &&
                        b >= 0 && b < n &&
                        grid[a][b] > 0) {

                        total += grid[a][b];
                        grid[a][b] = 0;

                        island.push_back(make_pair(a, b));
                    }
                }
            }

            if (total % k == 0) {
                ans++;
            }
        }
    }

    return ans;
}

int main(){
    vector<vector<int>> grid = {{0,2,1,0,0},{0,5,0,0,5},{0,0,1,0,0},{0,1,4,7,0},{0,2,0,0,8}};
    int k = 5;
    int ans = countIslands(grid, k);
    cout<<ans;
}