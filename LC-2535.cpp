#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int differenceOfSum(vector<int>& nums) {
    int eSum = 0;
    int dSum = 0;
    for(int i : nums){
        eSum += i;
        int d = i;
        while(i > 0){
            int r = i % 10;
            dSum += r;
            i /= 10;
        }
    }
    return abs(eSum - dSum);
}

int main(){
    vector<int> nums = {1,15,6,3};
    int ans = differenceOfSum(nums);
    cout<<ans;
}