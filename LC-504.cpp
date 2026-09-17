#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

string convertToBase7(int num){
    if(num == 0){
        return  "0";
    }
    int n = abs(num);
    string str = "";
    while(n > 0){
        int rem = n % 7;
        n = n / 7;
        str += to_string(rem);
    }
    if(num < 0){
        str += "-";
    }
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    int num = -100;
    string ans = convertToBase7(num);
    cout<<ans;
}