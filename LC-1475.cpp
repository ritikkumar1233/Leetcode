#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> finalPrices(vector<int> prices){
    stack<int> st;
    for(int i = prices.size()-1; i>=0; i--){
        while(!st.empty() && st.top() > prices[i]){
            st.pop();
        }
        if(st.empty()){
            st.push(prices[i]);
        }
        else{
            int fp = prices[i] - st.top();
            st.push(prices[i]);
            prices[i] = fp;

        }
    }
    return prices;
}

int main(){
    vector<int> prices{8, 4, 3, 2};
    vector<int> ans = finalPrices(prices);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}