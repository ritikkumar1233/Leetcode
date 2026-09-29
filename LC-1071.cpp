#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<stack>
using namespace std;

string gcdOfStrings(string str1, string str2){
    int n = str1.length();
    int m = str2.length();
    for(int i = 0; i < n + m; i++){
        if(str1[i % n] != str2[i % m]){
            return "";
        }
    }
    int len = __gcd(str1.length(), str2.length());
    return str1.substr(0, len);
}

int main(){
    string str1 = "TAUXXTAUXXTAUXXTAUXXTAUXX";
    string str2 = "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX";
    string ans = gcdOfStrings(str1, str2);
    cout<<ans;
}