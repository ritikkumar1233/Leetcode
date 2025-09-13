#include<iostream>
#include<cctype>
#include<stack>
using namespace std;

string makeGood(string s){
    string str = "";
    for(char c : s){
        if(!str.empty() && abs(str.back() - c) == 32){
            str.pop_back();
        }
        else{
            str.push_back(c);
        }
    }
    return str;
}

// string makeGood(string s){
//     stack<char> st;
//     for(int i = s.length()-1; i>=0; i--){
//         char ch = s[i];
//         if(!st.empty() && abs(st.top() - ch) == 32){
//             st.pop();
//         }
//         else{
//             st.push(ch);
//         }
//     }
//     string str = "";
//     while(!st.empty()){
//         str = str + st.top();
//         st.pop();
//     }
//     return str;
// }

int main(){
    string s = "abBAcC";
    string ans = makeGood(s);
    cout<<ans;
}