#include<iostream>
#include<cctype>
using namespace std;

string clearDigits(string s){
        string str = "";
        for(int i = 0; i<s.length(); i++){
            char ch = s[i];
            if(islower(ch)){
                str.push_back(ch);
            }
            else if(!str.empty()){
                str.pop_back();
            }
        }
        return str;
}

int main(){
    string s = "";
    string ans = clearDigits(s);
    cout<<ans;
}