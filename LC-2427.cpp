#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int commonFactors(int a, int b) {
    int count = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int a = 6;
    int b = 12;
    int ans = commonFactors(a, b);
    cout<<ans;
}