#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int> sumZero(int n){
    vector<int> ans(n);
    int k = 1;
    if(n % 2 == 0){
        for(int i = 0; i < n; i=i+2){
            ans[i] = k;
            ans[i+1] = -k;
            k++;
        }
    }
    else{
        ans[0] = 0;
        for(int i = 1; i < n; i=i+2){
            ans[i] = k;
            ans[i+1] = -k;
            k++;
        }
    }
    return ans;
}

int main(){
    int n = 5;
    vector<int> ans = sumZero(n);
    for(int num : ans){
        cout<<num<<" ";
    }
}