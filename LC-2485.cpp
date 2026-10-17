#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

// int piviotInteger(int n){
//     if(n == 1){
//         return 1;
//     }
//     int sum1 = 0;
//     for(int i = 1; i < n; i++){
//         sum1 += i;
//         int sum2 = 0;
//         for(int j = i; j <= n; j++){
//             sum2 += j;
//         }
//         cout<<sum1<<" "<<sum2<<endl;
//         if(sum1 == sum2){
//             return i;
//         }
//     }
//     return -1;
// }

int piviotInteger(int n){
    int sum = (n * (n + 1) / 2);
    int sr = sqrt(sum);
    if(sum == sr * sr){
        return sr;
    }
    return -1;
}

int main(){
    int n = 8;
    int ans = piviotInteger(n);
    cout<<ans;
}