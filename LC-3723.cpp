#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<stack>
using namespace std;

// string maxSumOfSquares(int num, int sum){
//     vector<int> arr;
//     int k = 1;
//     for(int i = 0; i < num; i++){
//         k *= 10;
//     }
//     cout<<k<<endl;
//     for(int i = k / 10; i < k; i++){
//         int add = 0;
//         int n = i;
//         while(n > 0){
//             int r = n % 10;
//             add += r;
//             n /= 10;
//         }
//         if(add == sum){
//             arr.push_back(i);
//         }
//     }
//     for(int j : arr){
//         cout<<j<<" ";
//     }
//     cout<<endl;
//     if(arr.empty()){
//         return "";
//     }
//     return to_string(arr.back());
// }

// string maxSumOfSquares(int num, int sum){
//     if(num * 9 < sum || sum == 0){
//         return "";
//     }
//     string str = "";
//     int i = 0; 
//     while(i < num){
//         if(sum < 10){
//             str += sum + '0';
//             sum -= sum;
//         }
//         else{
//             sum = sum - 9;
//             str += '9';
//         }
//         i++;
//     }
//     return str;
// }

string maxSumOfSquares(int num, int sum) {
    if (sum < 1 || sum > 9*num) return "";
    string res;
    res.reserve(num);
    int n = sum / 9, r = sum % 9;
    res.append(n, '9');
    num -= n;
    if (r) res += '0' + r, --num;
    res.append(num, '0');
    return res;
}

int main(){
    int num = 8;
    int sum = 1;
    string ans = maxSumOfSquares(num, sum);
    cout<<ans;
}