#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
#include<stack>
using namespace std;

int calculate(string s){
    stack<char> st;
    int sum = 0;
    int i = 0;
    while(i < s.size()){
        char ch = s[i];
        if(!st.empty() && st.top() == '+' && ch != ' '){
            st.pop();
            int digit = (st.top() - '0') + ch - '0';
            sum += digit;
            st.pop();
            i++;
        }
        else if(ch == ' '){
            i++;
        }
        else{
            st.push(ch);
            i++;
        }
        cout<<st.top()<<endl;
    }
    cout<<sum<<endl;
}

int main(){
    string s = "1 + 2";
    int ans = calculate(s);
    cout<<ans;
}