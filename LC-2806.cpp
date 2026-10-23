#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int accountBalanceAfterPurchase(int purchaseAmount){
    int r = purchaseAmount % 10;
    if(r == 0){
        return 100 - purchaseAmount;
    }
    else if(r < 5){
        return 100 - (purchaseAmount - r);
    }
    return 100 - (purchaseAmount + 10 - r);
}

int main(){
    int purchaseAmount = 74;
    int ans = accountBalanceAfterPurchase(purchaseAmount);
    cout<<ans;
}