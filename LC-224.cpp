#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
#include<stack>
using namespace std;

int calculate(string s){
    stack<int> st;
    int i = 0;
    while(i < s.size()){
        char ch = s[i];
        st.push(ch - '0');
        i++;
        cout<<st.top()<<endl;
    }
    return 1;
}

int main(){
    string s = "(1 + 2)";
    // string s = "(1+(4+5+2)-3)+(6+8)";
    int ans = calculate(s);
    cout<<ans;
}

// int calculate(string s){
//     stack<char> st;
//     int sum = 0;
//     int i = 0;
//     while(i < s.size()){
//         char ch = s[i];
//         if(!st.empty() && st.top() == '+' && ch != ' ' && ch != '(' && ch != ')'){
//             st.pop();
//             int digit = (st.top() - '0') + ch - '0';
//             st.pop();
//             st.push(char('0' + digit));
//             i++;
//         }
//         else if(!st.empty() && st.top() == '-' && ch != ' ' && ch != '(' && ch != ')'){
//             st.pop();
//             int digit = (st.top() - '0') - (ch - '0');
//             st.pop();
//             st.push(char('0' + digit));
//             i++;
//         }
//         else if(ch == ' ' || ch == '(' || ch == ')'){
//             i++;
//         }
//         else{
//             st.push(ch);
//             i++;
//         }
//         cout<<i<<" "<<st.top()<<endl;
//     }
//     int res = 0;
//     while(!st.empty()){
//         int digit = st.top() - '0';
//         res = res * 10 + digit;
//         st.pop();
//     }
//     return res;
// }