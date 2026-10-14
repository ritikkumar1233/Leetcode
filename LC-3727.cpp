#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

// long long maxAlternatingSum(vector<int> nums){
//     int n = nums.size();
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         nums[i] *= nums[i];
//     }
//     sort(nums.begin(), nums.end());
//     int s = 0;
//     int e = n - 1;
//     while(s <= e){
//         if(s == e){
//             sum += nums[e];
//         }
//         else{
//             sum += nums[e];
//             sum -= nums[s];
//         }
//         e--;
//         s++;
//     }
//     return sum;
// }

long long maxAlternatingSum(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        nums[i] *= nums[i];
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n / 2; i++) {
        sum += nums[n - 1 - i] - nums[i];
    }
    if (n % 2 != 0) {
        sum += nums[n / 2];
    }
    return sum;
}

int main(){
    vector<int> nums = {1,-1,2,-2,3,-3};
    long long ans = maxAlternatingSum(nums);
    cout<<ans;
}