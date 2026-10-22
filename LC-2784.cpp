#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

// int countBeautifulPairs(vector<int> nums){
//     int n =nums.size();
//     int count = 0;
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i+1; j < n; j++){
//             int d1 = nums[i];
//             int d2 = nums[j]  % 10;
//             int d3 = -1;
//             while(d1 > 0){
//                 d3 = d1 % 10;
//                 d1 /= 10;
//             }
//             if(__gcd(d2, d3) == 1){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

int countBeautifulPairs(vector<int> nums){
    int n = nums.size();
    vector<int> arr;
    int count = 0;
    for(int a: nums){
        int d1 = a;
        int d2 = 0;
        while(d1 > 0){
            d2 = d1 % 10;
            d1 /= 10;
        }
        arr.push_back(d2);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            int d1 = arr[i];
            int d2 = nums[j]  % 10;
            if(__gcd(d1, d2) == 1){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums = {2,5,1,4};
    int ans = countBeautifulPairs(nums);
    cout<<ans;
}