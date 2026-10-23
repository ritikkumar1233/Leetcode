#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int theMaximumAchievableX(int num, int t) {
    return num + (t * 2);
}

int main(){
    int num = 4;
    int t = 2;
    int ans = theMaximumAchievableX(num, t);
    cout<<ans;
}