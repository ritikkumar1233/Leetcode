#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int canBeTypedWord(string text, string brokenLetters){
    vector<int> freq(26, -1);
    for(char c : brokenLetters){
        freq[c - 'a'] = 0;
    }

    stringstream ss(text);
    string word;
    int count = 0;
    while(ss >> word){
        bool canType = true;
        for(char ch : word){
            if(freq[ch - 'a'] == 0){
                canType = false;
                break;
            }
        }
        if(canType) count++;
    }
    return count;
}

int main(){
    string text = "hello world";
    string brokenLetters = "ad";
    int ans = canBeTypedWord(text, brokenLetters);
    cout<<ans;
}