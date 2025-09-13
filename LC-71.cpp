#include<iostream>
#include<vector>
#include<stack>
using namespace std;

string simplifyPath(string path){
    vector<string> arr;
    stack<string> st;
    string temp, str;
    for(char ch : path){
        if(ch == '/'){
            arr.push_back(temp);
            temp.clear();
        }
        else{
            temp.push_back(ch);
        }
    }
    arr.push_back(temp);
    for(string part : arr){
        if(part == "." || part == ""){
            continue;
        }
        else if(part == ".."){
            if(!st.empty()) st.pop();
        }
        else{
            st.push(part);
        }
    }
    if(st.empty()){
        return "/";
    }
    else{
        while(!st.empty()){
            str = '/'+st.top()+str;
            st.pop();
        }

    }
    return str;
}

int main(){
    string path = "/home/user/Documents/../Pictures";
    string ans = simplifyPath(path);
    cout<<ans;
}