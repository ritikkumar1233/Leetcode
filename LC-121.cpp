#include<iostream>
#include<vector>
#include <algorithm>
#include<climits>
using namespace std;

int maxProfit(vector<int>& arr){
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] < minPrice){
            minPrice = arr[i];
        }
        else{
            int profit = arr[i] - minPrice;
            if(profit > maxProfit){
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}

int main(){
    vector<int> arr {7,1,5,3,6,4};
    int ans = maxProfit(arr);
    cout<<ans;
    
}