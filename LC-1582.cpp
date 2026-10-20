#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int passThePillow(int n, int time){
    int num = n - 1;
    int r = time % (n - 1);
    int d = time / (n - 1);
    if(d & 1){
        return n - r;
    }
    return 1 + r;
}

int main(){
    int n = 10;
    int time = 2;
    int ans = passThePillow(n, time);
    cout<<ans;
}