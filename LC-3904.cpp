#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstStableIndex(vector<int> nums, int k){
    int n = nums.size();
    int max = nums[0];
    int min = nums[n-1];
    vector<int> suffixMin(n);
    for(int i = n-1; i>=0; i--){
        if(min > nums[i]){
            min = nums[i];
        }
        suffixMin[i] = min;
    }

    for(int i = 0; i<n; i++){
        if(max < nums[i]){
            max = nums[i];
        }
        // cout<<"max:"<<max<<"  "<<"min:"<<suffixMin[i]<<endl;
        if((max - suffixMin[i]) <= k){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4};
    int k = 0;
    int ans = firstStableIndex(nums, k);
    cout<<ans;
}