#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

string multiply(string num1, string num2){
    if(num1 == "0" || num2 == "0"){
        return "0";
    }
    int m = num1.length();
    int n = num2.length();
    vector<int> arr(m + n, 0);
    string res = "";
    int carry = 0;
    for(int i = m - 1; i >= 0; i--){
        for(int j = n - 1; j >= 0; j--){
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int total = mul + arr[i + j+ 1];
            arr[i + j + 1] = total % 10; 
            arr[i + j] += total / 10;
        }
    }
    int k = 0;
    while(k < arr.size()){
        if(arr[k] == 0 && k == 0){
            k++;
        }
        else{
            res += char('0' + arr[k]);
            k++;
        }
    }
    return res;
}

int main(){
    string num1 = "0";
    string num2 = "0";
    string ans = multiply(num1, num2);
    cout<<ans;
}


// string multiply(string num1, string num2){
//     int m = num1.length();
//     int n = num2.length();
//     vector<int> total(m + n);
//     string res = "";
//     int carry = 0;
//     for(int i = num1.length() - 1; i >= 0; i--){
//         for(int j = num2.length() - 1; j >= 0; j--){
//             int mul = (num1[i] - '0') * (num2[j] - '0');
//             int rem = mul % 10;
//             total[i + j + 1] += mul + carry;
//             carry = mul / 10;
//             total[i + j] += carry;
//         }
//     }
//     for(int i = total.size() - 1; i >= 0; i--){
//         if(total[i] > 9){
//             int rem = total[i] % 10;
//             int c = total[i] / 10;
//             total[i] = rem;
//             total[i - 1] += c;
//         }
//     }
//     int k = 0;
//     while(k < total.size()){
//         if(total[k] == 0 && k == 0){
//             k++;
//         }
//         else{
//             res += char('0' + total[k]);
//             k++;
//         }
//     }
//     return res;
// }

