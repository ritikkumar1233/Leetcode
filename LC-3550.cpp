#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int smallestIndex(vector<int> nums){
    for(int i = 0; i < nums.size(); i++){
        int sum = 0;
        int digit = nums[i];
        while(digit > 0){
            sum += digit % 10;
            digit /= 10;
        }
        if(sum == i){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {101,135,2};
    int ans = smallestIndex(nums);
    cout<<ans;
}