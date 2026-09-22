#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<string>
using namespace std;

int reverseDegree(string s){
    int  i = 1;
    int res = 0;
    for(char ch : s){
        int a = 'z' - ch + 1;
        res += a * i;
        cout<<a<<" "<<res<<endl;
        i++;
    }
    return res;
}

int main(){
    string s = "zaza";
    int ans = reverseDegree(s);
    cout<<ans;
}
