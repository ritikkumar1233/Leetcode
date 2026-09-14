#include<iostream>
#include<queue>
using namespace std;

int findTheWinner(int n, int k){
    queue<int> q;
    for(int i = 1; i <= n; i++){
        q.push(i);
    }
    while(q.size() != 1){
        for(int j = 1; j<k; j++){
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }
    return q.front();
}

int main(){
    int n = 5;
    int k = 2;
    int ans = findTheWinner(n, k);
    cout<<ans;
}