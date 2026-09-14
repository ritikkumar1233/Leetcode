#include<iostream>
using namespace std;

bool canWinNIm(int n){
    return n % 4 != 0;
}

int main(){
    int n = 13;
    bool ans = canWinNIm(n);
    cout<<ans;
}