#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int subtractProductAndSum(int n){
    int sum = 0;
    int product = 1;
    while(n > 0){
        int r = n % 10;
        product *= r;
        sum += r;
        n /= 10;
    }
    return product - sum;
}

int main(){
    int n = 12;
    int ans = subtractProductAndSum(n);
    cout<<ans;
}