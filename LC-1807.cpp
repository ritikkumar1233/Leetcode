#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
using namespace std;

string evaluate(string s, vector<vector<string>>& knowledge){
    vector<string> res;
    string str;
    int i = 0;
    while(i < s.length()){
        string word = "";
        if(s[i] == '('){
            i++;
            while(s[i] != ')'){
                word += s[i];
                i++;
            }
            res.push_back(word);
            i++;
        }
        else{
            str += s[i];
            i++;
        }
    }
    return str;
}

int main(){
    string s = "(name)is(age)yearsold";
    vector<vector<string>> knowledge = {{"name","bob"},{"age","two"}};
    string ans = evaluate(s, knowledge);
    cout<<ans;
}