#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<stack>
using namespace std;

string addBinary(string a, string b){
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    string str = "";
    while(i >= 0 || j >= 0){
        int d1 = 0;
        int d2 = 0;
        if(i < a.size()) d1 = a[i] - '0';
        if(j < b.size()) d2 = b[j] - '0';
        int add = d1 + d2 + carry;
        int r = add % 2;
        str += r + '0';
        carry = add / 2;
        i--;
        j--;
    }
    if(carry != 0) str += carry + '0';
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    string a = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
    string b = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
    string ans = addBinary(a, b);
    cout<<ans;
}


// int binaryToDecimal(string n){
//     int i = n.size() - 1;
//     int num = 1;
//     int ans = 0;
//     while(i >= 0){
//         if(n[i] == '1'){
//             ans += num;
//         }
//         num *= 2;
//         i--;
//     }
//     return ans;
// }

// int dA = binaryToDecimal(a);
//     int dB = binaryToDecimal(b);
//     int add = dA + dB;
//     if(add == 0){
//         return "0";
//     }
//     string ans = "";
//     while(add > 0){
//         int rem = add % 2;
//         if(rem == 1){
//             ans += '1';
//         }
//         else{
//             ans += '0';
//         }
//         add /= 2;
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;