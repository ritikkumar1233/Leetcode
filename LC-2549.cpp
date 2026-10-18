#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int distinctIntegers(int n){
    if(n == 1){
        return 1;
    }
    return n - 1;
}

int main(){
    int n = 5;
    int ans = distinctIntegers(n);
    cout<<ans;
}