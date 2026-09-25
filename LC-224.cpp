#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
#include<stack>
using namespace std;

int calculate(string s){
    stack<int> st;
    int number = 0;
    int result = 0;
    int sign = 1;
    for(char ch : s){
        if(ch >= '0' && ch <= '9'){
            number = number * 10 +(ch - '0');
        }
        else if(ch == '+'){
            result += sign * number;
            sign = 1;
            number = 0;
        }
        else if(ch == '-'){
            result += sign * number;
            sign = -1;
            number = 0;
        }
        else if(ch == '('){
            st.push(result);
            st.push(sign);
            result = 0;
            sign = 1;
        }
        else if(ch == ')'){
            result += sign * number;
            number = 0;
            int oSign = st.top();
            st.pop();
            int oResult = st.top();
            st.pop();
            result = oResult + (oSign * result);
        }
        cout<<number<<" "<<result<<endl;
    }
    result += sign * number;
    return result;
}

int main(){
    string s = "-2147483648";
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