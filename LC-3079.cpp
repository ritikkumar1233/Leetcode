#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

// int sumOfEncryptedInt(vector<int>& nums){
//     int n = nums.size();
//     for(int i = 0; i < n; i++){
//         int l = 0;
//         int maxi = 0;
//         int d1 = nums[i];
//         while(d1 > 0){
//             int r = d1 % 10;
//             maxi = max(r, maxi);
//             l++;
//             d1 /= 10;
//         }
//         if(l == 2){
//             nums[i] = maxi * 11;
//         }
//         else if(l == 3){
//             nums[i] = maxi *111;
//         }
//         else if( l == 4){
//             nums[i] = 1111;
//         }
//     }
//     int sum = 0;
//     for(int a : nums){
//         sum += a;
//     }
//     return sum;
// }

int sumOfEncryptedInt(vector<int>& nums){
    int sum = 0;
    for(int a : nums){
        string str = to_string(a);
        sort(str.begin(), str.end());
        sum += stoi(string(str.size(),str.back()));
    }
    return sum;
}

int main(){
    vector<int> nums = {12,23,1};
    int ans = sumOfEncryptedInt(nums);
    cout<<ans;
}