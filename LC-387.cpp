#include<iostream>
#include<queue>
using namespace std;

int firstUniqCh(string s){
    queue<char> q;
    int ans = 0;
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        if(!q.empty() && ch == q.front()){
            q.pop();
            ans++;
        }
        else{
            q.push(ch);
        }
    }
    if(q.empty()){
        return -1;
    }
    return ans;
}

int main(){
    string s = "xxyz";
    int ans = firstUniqCh(s);
    cout<<ans;
}