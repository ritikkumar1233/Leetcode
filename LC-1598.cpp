#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int minOperations(vector<string> logs){
    stack<string> st;
    for(int i = 0; i<logs.size(); i++){
        if(!st.empty() && logs[i] == "../"){
            st.pop();
        }
        else if(logs[i] == "./" || logs[i] == "../"){
            continue;
        }
        else{
            st.push(logs[i]);
        }
    }
    return st.size();
}

int main(){
    vector<string> logs{"d1/","d2/","d3/","../","../","d4/"};
    int ans = minOperations(logs);
    cout<<ans;
}