#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int maximumProduct(vector<int>& nums) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int x : nums) {

        // Find 3 largest numbers
        if (x > max1) {
            max3 = max2;
            max2 = max1;
            max1 = x;
        }
        else if (x > max2) {
            max3 = max2;
            max2 = x;
        }
        else if (x > max3) {
            max3 = x;
        }

        // Find 2 smallest numbers
        if (x < min1) {
            min2 = min1;
            min1 = x;
        }
        else if (x < min2) {
            min2 = x;
        }
    }

    int r1 = max1 * max2 * max3;
    int r2 = min1 * min2 * max1;

    return max(r1, r2);
}

// int maximumProduct(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     int r1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
//     int r2 = nums[0] * nums[1] * nums[n-1];
//     if(r1 > r2) return r1;
//     else return r2;    
// }

int main(){
    vector<int> nums = {-1,-2,-3};
    int ans = maximumProduct(nums);
    cout<<ans;
}