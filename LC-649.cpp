#include<iostream>
#include<queue>
using namespace std;

string predictPartyVictory(string senate){
    int n = senate.length();
    queue<int> qR;
    queue<int> qD;
    for(int i = 0; i<n; i++){
        if(senate[i] == 'R'){
            qR.push(i);
        }
        else{
            qD.push(i);
        }
    }

    while(!qR.empty() && !qD.empty()){
        if(qR.front() < qD.front()){
            qD.pop();
            qR.push(qR.front() + n);
            qR.pop();
        }
        else{
            qR.pop();
            qD.push(qD.front() + n);
            qD.pop();
        }
    }
    if(qR.empty()){
        return "Diar";
    }
    else{
        return "Radiant";
    }
}

int main(){
    string senate = "RRDDD";
    string ans = predictPartyVictory(senate);
    cout<<ans;
}

// string predictPartyVictory(string senate){
//     int n = senate.length();
//     int countR = 0;
//     int countD = 0;
//     for(char ch : senate){
//         if(ch == 'R') countR++;
//         else countD++;
//     }
//     int banR = 0;
//     int banD = 0;
//     int i = 0;
//     while(countR != 0 && countD != 0){
//         if(senate[i % n] == 'R'){
//             if(banR > 0){
//                 banR--;
//                 countR--;
//             }
//             else{
//                 banD++;
//             }
//         }
//         else{
//             if(banD > 0){
//                 banD--;
//                 countD--;
//             }
//             else{
//                 banR++;
//             }
//         }
//         i++;
//         cout<<countR<<" "<<countD<<endl;
//         cout<<banR<<" "<<banD<<endl; 
//     }
//     if(countR > countD){
//         return "Radiant";
//     }
//     else{
//         return "Dire";
//     }
// }
