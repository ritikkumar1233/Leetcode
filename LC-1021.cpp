#include<iostream>
#include<stack>
using namespace std;

string removeOuterParentheses(string s){
    int b = 0;
    string res = "";
    for(char ch : s){
        if(ch == '('){
            if(b > 0){
                res += ch;
            }
            b++;
        }
        else{
            b--;
            if(b > 0){
                res += ch;
            }
        }
    }
    if(res.empty()){
        return s;
    }
    return res;
}

int main(){
    string s = "()()";
    string ans = removeOuterParentheses(s);
    cout<<ans;
}