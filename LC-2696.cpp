#include<iostream>
#include<stack>
using namespace std;

int minLength(string s){
    string str = "";
    for(char ch : s){
        if(!str.empty() && (str.back() == 'A' && ch == 'B')){
            str.pop_back();
        }
        else if(!str.empty() && (str.back() == 'C' && ch == 'D')){
            str.pop_back();
        }
        else{
            str.push_back(ch);
        }
    }
    return str.length();
}

// int minLength(string s){
//     stack<char> st;
//     for(int i = 0; i<s.length(); i++){
//         char ch = s[i];
//         if(!st.empty() && (st.top() == 'A' && ch == 'B')){
//             st.pop();
//         }
//         else if(!st.empty() && (st.top() == 'C' && ch == 'D')){
//             st.pop();
//         }
//         else{
//             st.push(ch);
//         }
//     }
//     return st.size();
// }

int main(){
    string s = "ABCDAB";
    int ans = minLength(s);
    cout<<ans;
}