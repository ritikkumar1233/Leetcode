#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int countPrimeSetBits(int left, int right){
    int res = 0;
    for(int num = left; num <= right; num++){
        int x = num;
        int count = 0;
        while(x > 0){
            x = x & (x-1);
            count++;
        }
        if(count == 2 || count == 3 || count == 5 || count == 7 || count == 11 || count == 13 ||    count == 17 || count == 19){
            res++;
        }
    }
    return res;
}

int main(){
    int left = 10;
    int right = 15;
    int ans = countPrimeSetBits(left, right);
    cout<<ans;
}