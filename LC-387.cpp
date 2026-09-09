#include<iostream>
#include<vector>
using namespace std;

int firstUniqCh(string s){
    vector<int> freq(26);
    for(char ch : s){
        freq[ch - 97]++;
    }
    for(int i = 0; i<s.length(); i++){
        if(freq[s[i] - 97] == 1){
            return i;
        }
    }
    return -1;
}

int main(){
    string s = "aabb";
    int ans = firstUniqCh(s);
    cout<<endl<<ans;
}