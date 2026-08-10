#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int thirdMax(vector<int> nums){
    int n = nums.size();
    if(n == 0) return -1;
    sort(nums.begin(), nums.end());
    vector<int> arr;
    int i = 0;
    while(i < n){
        if(arr.empty() || arr.back() != nums[i]){
            arr.push_back(nums[i]);
        }
        i++;
    }
    int m = arr.size();
    if(m < 3) return arr[m-1];
    else return arr[m-3];
}

int main(){
    vector<int> nums = {10, 9, 9, 8, 8, 7};
    int ans = thirdMax(nums);
    cout<<ans;
}