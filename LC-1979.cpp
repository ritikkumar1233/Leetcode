#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int findGCD(vector<int>& nums) {
    int mini = 2000;
    int maxi = 0;
    for(int n : nums){
        mini = min(mini, n);
        maxi = max(maxi, n);
    }
    cout<<mini<<" "<<maxi<<endl;
    return __gcd(mini, maxi);
}

int main(){
    vector<int> nums = {7,5,6,8,3};
    int ans = findGCD(nums);
    cout<<ans;
}