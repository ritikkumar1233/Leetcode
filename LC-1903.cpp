#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
using namespace std;

string largestOddNumber(string num) {
    int ans = -1;
    for(int i = 0; i < num.length(); i++){
        int d = num[i] - '0';
        if(d & 1){
            ans = i;
        }
    }
    return num.substr(0, ans+1);
}
int main(){
    string num = "1278";
    string ans = largestOddNumber(num);
    cout<<ans;
}