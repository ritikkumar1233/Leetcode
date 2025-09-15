#include<iostream>
#include<vector>
#include<stack>
using namespace std;

string removeDuplicateLetters(string s){
    vector<int> freq(26, 0);
    vector<bool> visited(26, false);
    stack<char> st;
    for(char ch : s){
         freq[ch - 'a']++;
    }
    for(char ch : s){
        freq[ch - 'a']--;
        if(visited[ch - 'a']) continue;

        while(!st.empty() && st.top() > ch && freq[st.top() - 'a'] > 0){
            visited[st.top() - 'a'] = false;
            st.pop();
        }

        st.push(ch);
        visited[ch - 'a'] = true;
    }
    string str;
    while(!st.empty()){
        str = st.top()+str;
        st.pop();
    }
    return str;
}

int main(){
    string s = "cbacdcbc";
    string ans = removeDuplicateLetters(s);
    cout<<ans;
}