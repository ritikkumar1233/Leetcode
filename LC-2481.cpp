#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int numberOfCuts(int n){
    if(n == 1){
        return 0;
    }
    int res = n / 2;
    if(n & 1){
        return n;
    }
    return res;
}

int main(){
    int n = 1;
    int ans = numberOfCuts(n);
    cout<<ans;
}