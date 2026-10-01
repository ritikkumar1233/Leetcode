#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int findNumbers(vector<int> nums){
    int i = 0;
    int count = 0;
    while(i < nums.size()){
        int n = nums[i];
        int digits = 0;
        while(n > 0){
            n /= 10;
            digits++;
        }
        if(digits > 0 && digits % 2 == 0){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    vector<int> nums = {12,345,2,6,7896};
    int ans = findNumbers(nums);
    cout<<ans;
}