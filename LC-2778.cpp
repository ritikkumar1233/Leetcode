#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(n % (i+1) == 0){
                sum += (nums[i] * nums[i]);
            }
        }
        return sum;
}

int main(){
    vector<int> nums = {1,4,10,12};
    int ans = sumOfSquares(nums);
    cout<<ans;
}