#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int minimumPushes(string word) {
    int n = word.size();
    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans += (i / 8) + 1;
    }

    return ans;
}

// int minimumPushes(string word){
//     int l = word.length();
//     int r = l % 8;
//     if(l <= 8) return l;
//     if(l <= 16){
//         if(r == 0) return 24;
//         l = 2 * r + 8;
//     }
//     else if(l <= 24){
//         if(r == 0) return 48;
//         l = 3 * r + 24;
//     }
//     else{
//         l = 4 * r + 48;
//     }
//     return l;
// }

int main(){
    string word = "abhrlngxyjkezwcm";
    int ans = minimumPushes(word);
    cout<<ans;
}