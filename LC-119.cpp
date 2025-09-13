// Pascals triangle  - Watch video on youtube

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> generate(int n){
  vector<vector<int>> arr;

  for(int i = 0; i<n; i++){
    vector<int> row (i+1, 1);
    for(int j = 1; j<i; j++){
        row[j] = arr[i-1][j-1] + arr[i-1][j];
    }
    arr.push_back(row);
  }
  return arr[n-1][0];
}

int main(){
    int row = 3;
    vector<vector<int>>ans = generate(row);
    for(int row = 0; row < ans.size(); row++){
        for(int col = 0; col < ans[row].size(); col++){
            cout<<ans[row][col]<<" ";
        }
        cout<<endl;
    }
}
