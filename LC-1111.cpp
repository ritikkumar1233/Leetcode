#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<stack>
using namespace std;

vector<int> maxDepthAfterSplit(string seq){
    vector<int> ans(seq.length());
    int depth = 0;
    for(int i = 0; i < seq.length(); i++){
        if(seq[i] == '('){
            depth++;
            ans[i] = depth % 2;
        }
        else{
            ans[i] = depth % 2;
            depth--;
        }
    }
    return ans;
}

int main(){
    string seq = "(()())";
    vector<int> ans = maxDepthAfterSplit(seq);
    for(int num: ans){
        cout<<num<<" ";
    }
}