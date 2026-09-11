#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

vector<int> deckRevealedIncreasing(vector<int> deck){
    int n = deck.size();
    queue<int> q;
    vector<int> res(n);
    sort(deck.begin(), deck.end());
    for(int i = 0; i<n; i++){
        q.push(i);
    }
    int i = 0;
    while(!q.empty()){
        res[q.front()] = deck[i];
        q.pop();
        q.push(q.front());
        q.pop();
        i++;
    }
    return res;
}

int main(){
    vector<int> deck = {1, 1000};
    vector<int> ans = deckRevealedIncreasing(deck);
    for(int i : ans){
        cout<<i<<" ";
    }
}