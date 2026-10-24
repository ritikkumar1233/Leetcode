#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

bool areSimilar(vector<vector<int>>& mat, int k){
    vector<vector<int>> arr(mat);
    int n = mat[0].size();
    int s = k % n;
    cout<<s<<endl;
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < n - 1; j++){
            int newCol;
            if(i % 2 == 0){
                newCol = (j - s + n) % n;
            }
            else{
                newCol = (j + s) % n;
            }
            if(mat[i][j] != mat[i][newCol]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    int k = 2;
    bool ans = areSimilar(mat, k);
    cout<<ans;
}