#include<iostream>
#include<vector>
using namespace std;

int titleToNumber(string columnTitle){
    int ans = 0;
    for(int i = 0; i<columnTitle.length(); i++){
        char ch = columnTitle[i];
        ans = ans * 26 + (ch - 'A' + 1);
    }
    return ans;
}

int main(){
    string columnTitle = "BMR";
    int ans = titleToNumber(columnTitle);
    cout<<ans;
}