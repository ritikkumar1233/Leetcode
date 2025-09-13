#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> ans(col, vector<int>(row));
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size(); j++){
            // cout<<i<<" "<<j<<endl;
            ans[i][j] = matrix[j][i];
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> matrix{{1000000000,2000000000},{-3000000000,-4000000000}}
;
    vector<vector<int>> ans = transpose(matrix);
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


// int main(){
//     vector<vector<int>> matrix{{1,2,3},{4,5,6}};
//     int row = matrix.size();
//     int col = matrix[0].size();
//     // cout<<row<<" "<<col;
//     vector<vector<int>> arr(col, vector<int>(row, 0));
//     for(int i = 0; i<arr.size(); i++){
//         for(int j = 0; j<arr[i].size(); j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }