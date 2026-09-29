#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> distributeCandies(int candies, int num_people){
    vector<int> op(num_people);
    int i = 0;
    int give = 1;
    while(candies > 0){
        int amount = min(give, candies);
        op[i % num_people] += amount;
        candies -= amount;
        give++;
        i++;
    }
    return op;
}

int main(){
    int candies = 7;
    int num_people = 4;
    vector<int> ans = distributeCandies(candies, num_people);
    cout<<"[";
    for(int num : ans){
        cout<<num<<',';
    }
    cout<<"]";
}