#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> dailyTemperatures(vector<int> temp){
    stack<int> st;
    vector<int> ans(temp.size(), 0);
    for(int i = 0; i<temp.size(); i++){
        if(st.empty()){
            st.push(i);
        }
        while(!st.empty() && temp[i] > temp[st.top()]){
            ans[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main(){
    vector<int> temp {73,74,75,71,69,72,76,73};
    vector<int> ans = dailyTemperatures(temp);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
