#include<iostream>
#include<stack>
using namespace std;

string reversePrefix(string word, char ch){
    int n = word.length();
    int i = 0;
    for(char c : word){
        if(ch == c){
            break;
        }
        else if(i == n-1){
            return word;
        }
        i++;
    }
    string str = "";
    for(int j = 0; j<=i; j++){
        str = word[j] + str;
    }
    str = str + word.substr(i+1, n-1);
    return str;
}

int main(){
    string word = "xyzwx";
    char ch = 'w';
    string ans = reversePrefix(word, ch);
    cout<<ans;
}