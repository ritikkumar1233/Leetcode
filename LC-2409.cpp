#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<stack>
using namespace std;

int totalDays(int m, int d){
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int td = 0;
    for(int i = 0; i < m - 1; i++){
        td += days[i];
    }
    return td + d;
}

int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob){
    int aAM = stoi(arriveAlice.substr(0,2));
    int aAD = stoi(arriveAlice.substr(3,2));
    int aTAD = totalDays(aAM, aAD);
    int lAM = stoi(leaveAlice.substr(0,2));
    int lAD = stoi(leaveAlice.substr(3,2));
    int aTLD = totalDays(lAM, lAD);
    int aBM = stoi(arriveBob.substr(0,2));
    int aBD = stoi(arriveBob.substr(3,2));
    int bTAD = totalDays(aBM, aBD);
    int lBM = stoi(leaveBob.substr(0,2));
    int lBD= stoi(leaveBob.substr(3,2));
    int bTLD = totalDays(lBM, lBD);

    int start = max(aTAD, bTAD);
    int end = min(aTLD, bTLD);
    if(start > end){
        return 0;
    }
    return end - start + 1;
}

int main(){
    string arriveAlice = "10-01";
    string leaveAlice = "10-31";
    string arriveBob = "11-01";
    string leaveBob = "11-31";
    int ans = countDaysTogether(arriveAlice, leaveAlice, arriveBob, leaveBob);
    cout<<ans;
}