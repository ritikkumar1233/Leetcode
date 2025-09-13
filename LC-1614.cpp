#include<iostream>
#include<stack>
using namespace std;

int maxDepth(string s){
    stack<char> st;
    int maxi = 0, count = 0;
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        if(ch == '('){
            st.push(ch);
            count++;
            maxi = max(maxi, count);
        }
        else if(!st.empty() && ch == ')'){
            st.pop();
            count = st.size();
        }
    }
    return maxi;
}

int main(){
    string s = "(((";
    int ans = maxDepth(s);
    cout<<ans;
}