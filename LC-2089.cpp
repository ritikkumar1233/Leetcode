#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target){
    vector<int> arr;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            arr.push_back(i);
        }
    }
    return arr;
}

int main(){
    vector<int> nums = {1,2,5,2,3};
    int target = 3;
    vector<int> ans = targetIndices(nums, target);
    for(int i : ans){
        cout<<i<<" ";
    }
}