#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int numberOfMatches(int n){
    return n - 1;
}

int main(){
    int n = 7;
    int ans = numberOfMatches(n);
    cout<<ans;
}