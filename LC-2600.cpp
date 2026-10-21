#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k){
    if(numOnes >= k){
        return k;
    }
    int tSum = numOnes;
    k = k - numOnes - numZeros;
    if(k > 0){
        tSum -= k;
    }
    return tSum;
}

int main(){
    int numOnes = 3;
    int numZeros = 2;
    int numNegOnes = 2;
    int k = 6;
    int ans = kItemsWithMaximumSum(numOnes, numZeros, numNegOnes, k);
    cout<<ans;
}