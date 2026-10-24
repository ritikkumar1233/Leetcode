#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

string maximumOddBinaryNumber(string s){
    string str = "";
    int count0 = 0;
    int count1 = 0;
    int k = 1;
    for(char ch : s){
        if(ch == '0') count0++;
        else count1++;
    }
    while(count1 > 1){
        str += '1';
        count1--;
    }
    while(count0 > 0){
        str += '0';
        count0--;
    }
    str += '1';
    return str;
}

int main(){
    string s = "0101";
    string ans = maximumOddBinaryNumber(s);
    cout<<ans;
}