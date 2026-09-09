#include<iostream>
using namespace std;

int countCommas(int n){
    if(n < 1000){
        return 0;
    }
    int count = n - 999;
    return count;
}

int main(){
    int n = 99999;
    int ans = countCommas(n);
    cout<<ans;
}

