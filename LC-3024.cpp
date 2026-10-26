#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

string triangleType(vector<int> nums){
    if(nums[0] + nums[1] <= nums[2] || nums[0] + nums[2] <= nums[1] || nums[1] + nums[2] <= nums[0]){
        return "none";
    }
    if(nums[0] == nums[1] && nums[1] == nums[2]) return "equilateral";
    if(nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2]) return "isosceles";
    return "scalene";
}

int main(){
    vector<int> nums = {5,3,8};
    string ans = triangleType(nums);
    cout<<ans;
}