#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<stack>
using namespace std;

string reverseParentheses(string s){
    stack<char> st;
    int i = 0;
    string str = "";
    while(i < s.length()){
        if(s[i] == ')'){
            str = "";
            while(st.top() != '('){
                str += st.top();
                st.pop();
            }
            st.pop();
            for(char ch : str){
                st.push(ch);
            }
            i++;
        }
        else{
            st.push(s[i]);
            i++;
        }
    }
    str = "";
    while(!st.empty()){
        str += st.top();
        st.pop();
    }
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    string s = "a(bcdefghijkl(mno)p)q";
    string ans = reverseParentheses(s);
    cout<<ans;
}