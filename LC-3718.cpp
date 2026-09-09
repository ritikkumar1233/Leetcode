#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int missingMultiple(vector<int> nums, int k){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int i = 0;
    int j = 1;
    int val = -1;
    while(i < n){
        val = k*j;
        if(nums[i] < val){
            i++;
        }
        else if(val == nums[i]){
            i++;
            j++;
        }
        else{
            return val;
        }
    }
    if(nums[n-1] % k == 0 && nums[n-1] >= val){
        return val + k;
    }
    else{
        return val;
    }
}

int main(){
    vector<int> nums = {7,7,7,7};
    int k = 7;
    int ans = missingMultiple(nums, k);
    cout<<ans;
}