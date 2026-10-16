#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<stack>
using namespace std;

int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob){
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int aAM = stoi(arriveAlice.substr(0,2));
    int lAM = stoi(leaveAlice.substr(0,2));
    int aBM = stoi(arriveBob.substr(0,2));
    int lBM = stoi(leaveBob.substr(0,2));

    int aAD = stoi(arriveAlice.substr(3,2));
    int lAD = stoi(leaveAlice.substr(3,2));
    int aBD = stoi(arriveBob.substr(3,2));
    int lBD= stoi(leaveBob.substr(3,2));
    if(lAM < aBM || lBM < aAM){
        return 0;
    }
    if(aAM > aBM && lAM > lBM){
        if()
    }
    return -1;
}

int main(){
    string arriveAlice = "01-15";
    string leaveAlice = "02-18";
    string arriveBob = "01-16";
    string leaveBob = "01-19";
    int ans = countDaysTogether(arriveAlice, leaveAlice, arriveBob, leaveBob);
    cout<<ans;
}