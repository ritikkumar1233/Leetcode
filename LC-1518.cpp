#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int numWaterBottles(int numBottles, int numExchange){
    int total = numBottles;
    int rem = 0;
    while(numBottles > 0){
        int emptyBottles = numBottles + rem;
        int ex = emptyBottles / numExchange;
        rem = emptyBottles % numExchange;
        total += ex;
        numBottles = ex;
    }
    return total;
}

int main(){
    int numBottles = 15;
    int numExchange = 4;
    int ans = numWaterBottles(numBottles, numExchange);
    cout<<ans;
}