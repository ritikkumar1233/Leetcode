#include<iostream>
#include<stack>
using namespace std;



string reversePrefix(string word, char ch){
    stack<char> st;
    string str;
    int idx;
    for(int i = 0; i<word.length(); i++){
        st.push(word[i]);
        if(word[i] == ch){
            idx = i;
            break;
        }
    }
}

int main(){
    string word = "abcd";
    char ch = 'z';
    string ans = reversePrefix(word, ch);
    cout<<ans;
}