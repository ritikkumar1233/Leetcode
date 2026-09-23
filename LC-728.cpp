#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> selfDividingNumbers(int left, int right){
    vector<int> res;
    while(left <= right){
        int x = left;
        bool isValid = true;
        while(x > 0){
            int rem = x % 10;
            if(rem == 0 || left % rem != 0){
                isValid = false;
                break;
            }
            x /= 10;
        }
        if(isValid){
            res.push_back(left);
        }
        left++;
    }
    return res;
}

// vector<int> selfDividingNumbers(int left, int right){
//     vector<int> res;
//     while(left <= right){
//         if(left % 10 == 0){
//             left++;
//         }
//         else if(left < 13){
//             res.push_back(left);
//             left++;
//         }
//         else{
//             int i = left;
//             while(i > 0){
//                 int rem = i % 10;
//                 if(rem == 0){
//                     break;
//                 }
//                 if(left % rem != 0){
//                     break;
//                 }
//                 i /= 10;
//                 if(i == 0){
//                     res.push_back(left);
//                 }
//             }
//             left++;
//         }
//         cout<<left<<" ";
//     }
//     cout<<endl;
//     return res;
// }

int main(){
    int left = 66;
    int right = 708;
    vector<int> ans = selfDividingNumbers(left, right);
    for(int i : ans){
        cout<<i<<" ";
    }
}