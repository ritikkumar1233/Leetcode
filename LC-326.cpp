#include<iostream>
using namespace std;

bool isPowerOfThree(int n){
    return n > 0 && 1162261467 % n == 0;
}

int main(){
    int n = 27;
    bool ans = isPowerOfThree(n);
    cout<<ans;
}