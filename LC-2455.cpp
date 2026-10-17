#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int averageValue(vector<int>& nums) {
    int sum = 0;
    int count = 0;
    for(int n : nums){
        if(n % 2 == 0 && n % 3 == 0){
            sum += n;
            count++;
        }
    }
    if(sum == 0){
        return 0;
    }
    return sum/count;
}

int main(){
    vector<int> nums = {1,3,6,10,12,15};
    int ans = averageValue(nums);
    cout<<ans;
}