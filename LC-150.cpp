#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int evalRPN(vector<string> tokens){
    stack<int> st;
    for(int i = 0; i<tokens.size(); i++){
        if(tokens[i] == "+"){
            int temp = st.top();
            st.pop();
            temp = temp + st.top();
            st.pop();
            st.push(temp);
        }
        else if(tokens[i] == "-"){
            int temp = st.top();
            st.pop();
            temp = st.top() - temp;
            st.pop();
            st.push(temp);
        }
        else if(tokens[i] == "*"){
            int temp = st.top();
            st.pop();
            temp = temp * st.top();
            st.pop();
            st.push(temp);
        }
        else if(tokens[i] == "/"){
            int temp = st.top();
            st.pop();
            temp =  st.top() / temp;
            st.pop();
            st.push(temp);
        }
        else{
            st.push(stoi(tokens[i]));
        }
    }
    return st.top();
}

int main(){
    vector<string>tokens {"13","5","/"};
    int ans = evalRPN(tokens);
    cout<<ans;
}