#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
    int n = grid.size();
    vector<int> arr((n * n)+1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[grid[i][j]]++;
        }
    }
    int ans1 = -1;
    int ans2 = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            ans1 = i; 
        }
        if(arr[i] > 1){
            ans2 = i;
        }
    }
    return {ans2, ans1};
}

int main(){
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans = findMissingAndRepeatedValues(grid);
    for(int a : ans){
        cout<<a<<" ";
    }
}