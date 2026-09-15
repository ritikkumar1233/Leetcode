#include<iostream>
#include<vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n){
    vector<string> res;
    for(int i = 1; i<=n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            res.push_back("FizzBuzz");
        }
        else if(i % 3 == 0){
            res.push_back("Fizz");
        }
        else if(i % 5 == 0){
            res.push_back("Buzz");
        }
        else{
            string str = to_string(i);
            res.push_back(str);
        }
    }
    return res;
}

int main(){
    int n = 15;
    vector<string> ans = fizzBuzz(n);
    for(string s : ans){
        cout<<s<<" ";
    }
}