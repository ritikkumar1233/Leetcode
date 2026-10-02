#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int> getNoZeroIntegers(int n){
    int i = 1;
    while(i < n){
        int x = n - i;
        int y = i;
        bool z = true;
        while(x > 0 || y > 0){
            int r1 = x % 10;
            int r2 = y % 10;
            if((x > 0 && r1 == 0) || (y > 0 && r2 == 0)){
                z = false;
                break;
            }
            x /= 10;
            y /= 10;
        }
        if(z){
            return {i, n - i};
        }
        i++;
    }
    return { -1, -1};
}

int main(){
    int n = 19;
    vector<int> ans = getNoZeroIntegers(n);
    for(int num : ans){
        cout<<num<<" ";
    }
}