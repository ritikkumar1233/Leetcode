#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int digonalPrime(vector<vector<int>> nums){
    int n = nums.size();
    int j = n - 1;
    int maxi = 0;
    for(int i = 0; i < n; i++){
        bool r1 = isPrime(nums[i][i]);
        bool r2 = isPrime(nums[i][j]);
        if(r1){
            maxi = max(maxi, nums[i][i]);
        }
        if(r2){
            maxi = max(maxi, nums[i][j]);
        }
        j--;
    }
    return maxi;
}

int main(){
    vector<vector<int>> nums = {{1,2,3}, {5,17,7}, {9,11,10}};
    int ans = digonalPrime(nums);
    cout<<ans;
}