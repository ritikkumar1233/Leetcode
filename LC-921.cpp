#include<iostream>
#include<stack>
using namespace std;

int minAddToMakeValid(string s){
    int balance = 0;
    int ans = 0;
    for(char ch : s){
        if(ch == '('){
            balance++;
        }
        else{
            if(balance == 0){
                ans++;
            }
            else{
                balance--;
            }
            
        }
    }
    return ans + balance;
}

int main(){
    string s = ")))";
    int ans = minAddToMakeValid(s);
    cout<<ans;
}