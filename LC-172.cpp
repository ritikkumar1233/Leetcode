#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int trailingZeroes(int n){
    int k = 5;
    int count = 0;
    while(k <= n){
        count += n / k;
        k *= 5;
    }
    return count;
}

int main(){
    int n = 200;
    int ans = trailingZeroes(n);
    cout<<ans;
}