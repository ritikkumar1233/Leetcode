#include<iostream>
#include<stack>
using namespace std;

// bool backspaceCompare(string s, string t){
//     stack<char> st;
//     for(int i = 0; i<s.length(); i++){
//         char ch = s[i];
//         if(ch == '#'){
//             st.pop();
//         }
//         else{
//             st.push(ch);
//         }
//     }
// }

bool backspaceCompare(string s, string t){
    stack<char> st1;
    stack<char> st2;
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        if(ch == '#'){
            st1.pop();
        }
        else{
            st1.push(ch);
        }
    }
    for(int i = 0; i<t.length(); i++){
        char ch = t[i];
        if(ch == '#'){
            st2.pop();
        }
        else{
            st2.push(ch);
        }
    }
    while(!st1.empty() && !st2.empty()){
        if(st1.top() != st2.top()){
            return false;
        }
        st1.pop();
        st2.pop();
    }
    return st1.empty() && st2.empty();
}

int main(){
    string s = "bxj##tw";
    string t = "bxj###tw";
    bool ans = backspaceCompare(s, t);
    if(ans == true){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }
}