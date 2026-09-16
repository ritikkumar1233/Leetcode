#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

string addStrings(string num1, string num2){
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int carry = 0;
    string res = "";
    while(i >= 0 || j >= 0){
        int digit1 = 0;
        int digit2 = 0;
        if(i >= 0){
            digit1 = num1[i] - '0';
        }
        if(j >= 0){
            digit2 = num2[j] - '0';
        }
        carry = digit1 + digit2 + carry;
        int rem = carry % 10;
        carry = carry / 10;
        res += char('0' + rem);
        i--;
        j--;
    }
    if(carry != 0){
        res += char('0' + carry);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string num1 = "11";
    string num2 = "11";
    string ans = addStrings(num1, num2);
    cout<<ans;
}