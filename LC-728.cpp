#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> selfDividingNumbers(int left, int right){
    vector<int> res;
    while(left <= right){
        if(left % 10 == 0){
            left++;
        }
        else if(left < 13){
            res.push_back(left);
            left++;
        }
        else{
            
        }
    }
}

int main(){
    int left = 1;
    int right = 22;
    vector<int> ans = selfDividingNumbers(left, right);
    for(int i : ans){
        cout<<i<<" ";
    }
}