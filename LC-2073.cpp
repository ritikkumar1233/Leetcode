#include<iostream>
#include<vector>
using namespace std;

int timeRequiredToBuy(vector<int> tickets, int k){
    int n = tickets.size();
    int i = 0;
    int time = 0;
    while(tickets[k] != 0){
        if(tickets[i % n] != 0){
            tickets[i % n]--;
            time++;
        }
        i++;
    }
    return time;
}

int main(){
    vector<int> tickets = {5,1,1,1};
    int k = 0;
    int ans = timeRequiredToBuy(tickets, k);
    cout<<ans;
}