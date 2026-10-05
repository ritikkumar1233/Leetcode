#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// int countOdds(int low, int high){
//     int count = 0;
//     for(int i = low; i <= high; i++){
//         if(i % 2 != 0){
//             count++;
//         }
//     }
//     return count++;
// }

int countOdds(int low, int high){
    return (high + 1) / 2 - low / 2;
}

int main(){
    int low = 2;
    int high = 7;
    int ans = countOdds(low, high);
    cout<<ans;
}