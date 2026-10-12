#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int divisorSubstrings(int num, int k) {
    int count = 0;
    int n = num;
    
    while(n > 10){
        int r = n % 100;
        cout<<r<<endl;
        if(num % r == 0){
            count++;
        }
        n /= 10;
    }
    return count;
}

int main(){
    int num = 240;
    int k = 2;
    int ans = divisorSubstrings(num, k);
    cout<<ans;
}