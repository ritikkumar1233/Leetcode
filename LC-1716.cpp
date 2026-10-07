#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int totalMoney(int n) {
    int i = 1;
    int d = 1;
    int t = 0;
    int x = 2;
    while(i <= n){
        t += d;
        d++;
        if(i % 7 == 0){
            d = x;
            x++;
        }
        i++;
    }
    return t;
}

int main(){
    int n = 7;
    int ans = totalMoney(n);
    cout<<ans;
}