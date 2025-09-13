#include<iostream>
#include<vector>
using namespace std;

void duplicateZeros(vector<int> &arr){
    int n = arr.size();
    vector<int> ans;
    for(int i = 0; i<arr.size() && ans.size()<n; i++){
        if(arr[i] == 0){
            ans.push_back(0);
            if(ans.size() < n){
                ans.push_back(0);
            }
        }
        else{
            ans.push_back(arr[i]);
        }
    }
    arr = ans;

    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}


// void arrange(vector<int> &arr, int s){
//     int e = arr.size()-1;
//     for(int i = e; i>s; i--){
//         arr[i] = arr[i-1];
//     }
// }

// void duplicateZeros(vector<int> &arr){
//      for(int i = 0; i<arr.size(); i++){
//         if(arr[i] == 0){
//             arrange(arr, i);
//             i++;
//         }
//      }

//      for(int i = 0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//      }
// }

int main(){
    vector<int> arr{1, 2, 0, 3, 4, 5};
    duplicateZeros(arr);
}