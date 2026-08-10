#include<iostream>
using namespace std;

int arrangeCoins(int n){
    if(n == 1){
        return 1;
    }
    int rem = n;
    int i = 0;
    while(rem > 0){
        rem = rem - i - 1;
        if(rem >= 0){
            i++;
        }
    }
    return i;
}

int main(){
    int n = 21;
    int ans = arrangeCoins(n);
    cout<<ans;
}