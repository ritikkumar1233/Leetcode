#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int numPrimeArrangements(int n){
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            count++;
            int j = 2 * i;
            while(j <= n){
                prime[j] = false;
                j += i;
            }
        }
    }
    int pn = 0;
    for(int i = 1; i < prime.size(); i++){
        if(prime[i]){
            pn++;
        }
    }
    const long long MOD = 1e9 + 7;
    int cn = n - pn;
    long long c1 = 1;
    long long c2 = 1;
    while(pn > 0){
        c1 = (1LL * c1 * pn) % MOD;
        pn--;
    }
    while(cn > 0){
        c2 = (1LL * c2 * cn) % MOD;
        cn--;
    }
    return (c1 * c2) % MOD;
}

int main(){
    int n = 100;
    int ans = numPrimeArrangements(n);
    cout<<ans;
}