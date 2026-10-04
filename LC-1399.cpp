#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int countLargestGroup(int n){
    vector<int> group(37, 0);
    if(n < 10){
        return n;
    }
    int i = 1;
    while(i <= n){
        int d = i;
        int dSum = 0;
        while(d > 0){
            int r = d % 10;
            dSum += r;
            d /= 10;
        }
        group[dSum]++;
        i++;
    }
    int count = 0;
    int m = group[0];
    for(int i = 1; i < group.size(); i++){
        m = max(m, group[i]);
    }
    for(int a : group){
        if(a == m){
            count++;
        }
    }
    return count;
}

int main(){
    int n = 360;
    int ans = countLargestGroup(n);
    cout<<ans;
}