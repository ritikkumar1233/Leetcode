#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int countDigits(int num) {
    int c = 0;
    int d = num;
    while(d > 0){
        int r = d % 10;
        if(num % r == 0){
            c++;
        }
        d /= 10;
    }
    return c;
}

int main(){
    int n = 121;
    int ans = countDigits(n);
    cout<<ans;
}