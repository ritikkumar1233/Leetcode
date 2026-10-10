#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int sumBase(int n, int k) {
    int sum = 0;
    while(n > 0){
        int r = n % k;
        sum += r;
        n /= k;
    }
    return sum;
}

int main(){
    int n = 34;
    int k = 6;
    int ans = sumBase(n, k);
    cout<<ans;
}