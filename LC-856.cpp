#include<iostream>
#include<stack>
using namespace std;

// int scoreOfParanthese(string s){
//     stack<int> st;
//     st.push(0);
//     for(char ch : s){
//         if(ch == '('){
//             st.push(0);
//         }
//         else{
//             int inside = st.top();
//             st.pop();
//             int score;
//             if(inside == 0){
//                 score = 1;
//             }
//             else{
//                 score = 2 * inside;
//             }
//             st.top() +=score;
//         }
//     }
//     return st.top();
// }

int scoreOfParentheses(string s) {
    int depth = 0;
    int score = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            depth++;
        }
        else {
            depth--;

            if (s[i - 1] == '(') {
                score += (1 << depth);
            }
        }
    }

    return score;
}

int main(){
    string s = "(()())";
    int ans = scoreOfParentheses(s);
    cout<<ans;
}