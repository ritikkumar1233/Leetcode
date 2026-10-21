#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int distanceTraveled(int mainTank, int additionalTank){
    int t = mainTank / 5;
    int r = mainTank % 5;
    int m = r + t;
    while(m >= 5){
        m++;
        m -= 5;
        t++;
    }
    if(t > additionalTank) t = additionalTank;
    return (mainTank + t) * 10;
}

// int distanceTraveled(int mainTank, int additionalTank) {
//     int transfers = min((mainTank - 1) / 4, additionalTank);
//     return (mainTank + transfers) * 10;
// }

int main(){
    int mainTank = 25;
    int additionalTank = 2;
    int ans = distanceTraveled(mainTank, additionalTank);
    cout<<ans;
}