#include<iostream>
#include<stack>
using namespace std;

string removeStars(string s){
    int k = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == '*'){
            if(k > 0) k--;
        }
        else{
            s[k] = s[i];
            k++;
        }
    }
    return s.substr(0,k);
}


// string removeStars(string s){
//     string str;
//     for(int i = 0; i<s.length(); i++){
//         if(!str.empty() && s[i] == '*'){
//             str.pop_back();
//         }
//         else if(str.empty() && s[i] == '*'){
//             continue;
//         }
//         else{
//             str.push_back(s[i]);
//         }
//     }
//     return str;
// }

int main(){
    string s = "ab*c*";
    string ans = removeStars(s);
    cout<<ans;
}