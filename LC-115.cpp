#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int numDistinct(string s, string t){
    int n = s.length();
    int m = t.length();
    const long long LIMIT = INT_MAX;
    vector<vector<int>> dp(n+1, vector<int>(m+1));
    for(int i = 0; i<=n; i++){
        dp[i][0] = 1;
    }

    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=m; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl<<endl;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(s[i-1] == t[j-1]){
                 if(dp[i - 1][j - 1] > LIMIT - dp[i - 1][j]) {
                    dp[i][j] = LIMIT;
                }
                else{
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                }
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=m; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return (int)dp[n][m];
}

int main(){
    string s = "babgbag";
    string t = "bag";
    int ans = numDistinct(s, t);
    cout<<ans;
}