#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int distributeCandies(int n, int limit){
    int count = 0;
    for(int i = 0; i <= limit; i++){
        for(int j = 0; j <= limit; j++){
            int k = n - i - j;
            if(k <= limit && k >= 0 && i + j + k == n){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n = 5;
    int limit = 2;
    int ans = distributeCandies(n, limit);
    cout<<ans;
}