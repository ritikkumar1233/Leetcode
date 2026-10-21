#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int findDelayedArrivalTime(int arrivalTime, int delayedTime){
    return arrivalTime + delayedTime % 24;
}

int main(){
    int arrivalTime = 13;
    int delayedTime = 11;
    int ans = findDelayedArrivalTime(arrivalTime, delayedTime);
    cout<<ans;
}