#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

bool uniformArray(vector<int> nums1){
    int mn = INT_MAX;
    for(int i : nums1){
        if(i % 2 == 1) mn = min(i, mn);
    }

    for(int i : nums1){
        if(i % 2 == 0 && mn != INT_MAX && i < mn) return false;
    }
    return true;
}

int main(){
    vector<int> nums1 = {23,86};
    bool ans = uniformArray(nums1);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}


// bool uniformArray(vector<int> nums1){
//     int n = nums1.size();
//     bool even = true;
//     bool odd = true;
//     int min = INT_MAX;
//     for(int i = 0; i<n; i++){
//         if(nums1[i] % 2 == 0){
//             odd = false;
//         }
//         else if(nums1[i] % 2 != 0){
//             even = false;
//             if(min > nums1[i]){
//                 min = nums1[i];
//             }
//         }
//         cout<<nums1[i]<<" ";
//     }
//     cout<<endl<<min<<endl;
//     if(odd || even){
//         return true;
//     }
//     else{
//         for(int i = 0; i<n; i++){
//             if(nums1[i] % 2 == 0){
//                 if(nums1[i] - min < 1){
//                     return false;
//                 }
//             }
//         }
//     }
//     return true;
// }
