#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> merge(vector<int> &arr1, int m, vector<int> &arr2, int n){
    if(n == 0){
        return arr1;
    }
    else if(m == 0){
        return arr2;
    }
    for(int i = 0; i<n; i++){
        arr1[i+m] = arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    return arr1;
}

int main(){
    vector<int> arr1 {-5,-3,0,0,0};
    int m = 2;

    vector<int> arr2 {-4,-2,-1};
    int n = 3;
    vector<int>r = merge(arr1, m, arr2, n);
    for(int i = 0; i < r.size(); i++){
        cout<<r[i]<<" ";
    }
}