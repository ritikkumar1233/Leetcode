#include<iostream>
#include<algorithm>
using namespace std;

long long countCommas(long long n){
    if(n < 1000){
        return 0;
    }
    long long power = 1000;
    long long comma = 0;
    while(power <= n){
        comma += (n- power + 1);
        power *= 1000;
    }
    return comma;
}

int main(){
    long long n = 1000000000000000;
    long long ans = countCommas(n);
    cout<<ans;
}