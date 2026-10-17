#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int smallestEvenMultiple(int n) {
    for(int i = n; i <= n+n; i++){
        if(i % 2 == 0 && i % n == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    int n = 10;
    int ans = smallestEvenMultiple(n);
    cout<<ans;
}