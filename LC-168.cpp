#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string convertToTitle(int columnNumber){
    vector<char> t;
    t.push_back('Z');
    for(char ch = 'A'; ch <= 'Z'; ch++){
        t.push_back(ch);
    }
    string ans = "";
    if(columnNumber <= 26){
        ans += t[columnNumber % 26];
        return ans;
    }
    while(columnNumber > 26){
        int r = columnNumber % 26;
        int q = (columnNumber - r) / 26;
        if(r == 0){
            q--;
        }
        columnNumber = q;
        ans += t[r];
        if(q <=  26){
            ans += t[q];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int columnNumber = 28;
    string ans = convertToTitle(columnNumber);
    cout<<ans;
}