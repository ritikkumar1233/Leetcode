#include<iostream>
#include<stack>
using namespace std;

int scoreOfParanthese(string s){
    stack<char> st;
    int count = 0;
    for(char ch : s){
        if(!st.empty() && ch == ')'){
            st.pop();
            count++;
        }
        else{
            st.push(ch);
        }
    }
    return count;
}

int main(){
    string s = "((()))";
    int ans = scoreOfParanthese(s);
    cout<<ans;
}