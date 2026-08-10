#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> fairCandySwap(vector<int> as, vector<int> bs){
    int A = 0, B = 0;
    for(int i : as){
        A += i;
    }

    for(int j : bs){
        B += j;
    }
    int diff = (B - A)/2;

    unordered_set<int> bob;

    for(int j : bs){
        bob.insert(j);
    }

    for(int x : as){
        int y = x + diff;
        if(bob.find(y) != bob.end()){
            return {x, y};
        }
    }
    return {};
}

int main(){
    vector<int> as = {1, 1};
    vector<int> bs = {2, 2};
    vector<int> ans = fairCandySwap(as, bs);
    for(int i : ans){
        cout<<i<<" ";
    }
}