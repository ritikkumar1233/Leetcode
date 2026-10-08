#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

bool squareIsWhite(string coordinates){
    int f = coordinates[0] - 96;
    int s = coordinates[1] - '0';
    if((f % 2 != 0 && s % 2 == 0) || (f % 2 == 0 && s % 2 != 0)){
        return true;
    }
    return false;
}

int main(){
    string coordinates = "c7";
    bool ans = squareIsWhite(coordinates);
    cout<<ans;
}