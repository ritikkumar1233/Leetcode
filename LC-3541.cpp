#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int maxFreqSum(string s){
    vector<char> freq(26, 0);
    int maxv = 0;
    int maxc = 0;
    for(char ch : s){
        int idx = ch - 'a';
        if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u'){
            freq[idx]++;
            maxv = max(maxv, int(freq[idx]));
        }
        else{
            freq[idx]++;
            maxc = max(maxc, int(freq[idx]));
        }
    }
    return maxv+maxc;
}

int main(){
    string s = "aaeezzxx";
    int ans = maxFreqSum(s);
    cout<<ans;
}