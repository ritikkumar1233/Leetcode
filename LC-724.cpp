#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int> &arr){
    int total_sum = 0;
    for(int i = 0; i<arr.size(); i++){
        total_sum += arr[i];
    }
    int left_sum = 0;
    for(int i = 0; i<arr.size(); i++){
        int right_sum = total_sum - left_sum - arr[i]; 
        if(right_sum == left_sum){
            return i;
        }
        left_sum += arr[i];
    }
    return -1;
}

int main(){
    vector<int> arr {1, 7, 3, 6, 5, 6};
    int ans = pivotIndex(arr);
    cout<<ans;
}