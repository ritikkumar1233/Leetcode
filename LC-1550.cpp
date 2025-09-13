#include<iostream>
#include<vector>
using namespace std;

bool threeConsecutiveOdds(vector<int> arr){
    int count = 0;
    for(int num : arr){
        if(num % 2 != 0){
            count++;
            if(count == 3) return true;
        }
        else{
            count = 0;
        }
    }
    return false;
}

// bool threeConsecutiveOdds(vector<int> arr){
//     if(arr.size() < 3){
//         return false;
//     }
//     for(int i = 0; i<arr.size()-2; i++){
//         if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
//             return true;
//         }
//     }
//     return false;
// }

int main(){
    vector<int> arr{10, 12, 13, 15, 17};
    bool ans = threeConsecutiveOdds(arr);
    cout<<ans;
}