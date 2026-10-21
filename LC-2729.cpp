#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

// bool isFacinating(int n){
//     string sNum = to_string(n) + to_string(2 * n) + to_string(3 * n);
//     if(sNum.length() > 9) return false;
//     int num = stoi(sNum);
//     vector<int> arr;
//     while(num > 0){
//         arr.push_back(num % 10);
//         num /= 10;
//     }
//     sort(arr.begin(), arr.end());
//     int i = 1;
//     for(int a : arr){
//         if(i != a){
//             return false;
//         }
//         i++;
//     }
//     return true;
// }

bool isFacinating(int n){
    string sNum = to_string(n) + to_string(2 * n) + to_string(3 * n);
    if(sNum.length() > 9) return false;
    vector<int> arr(10);
    for(char ch : sNum){
        int d = ch - '0';
        arr[d]++;
    }
    if(arr[0] > 0) return false;
    for(int i = 1; i < 10; i++){
        if(arr[i] > 1){
            return false;
        }
    }
    return true;
}


int main(){
    int n = 192;
    bool ans = isFacinating(n);
    cout<<ans;
}