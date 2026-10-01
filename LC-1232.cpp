#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

bool checkStraightLine(vector<vector<int>> coordinates){
    int n = coordinates.size();
    if(n < 3){
        return true;
    }
    int i = 2;
    int xRef = coordinates[1][0] - coordinates[0][0];
    int yRef = coordinates[1][1] - coordinates[0][1];
    while(i < n){
        int xP = coordinates[i][0] - coordinates[0][0];
        int yP = coordinates[i][1] - coordinates[0][1];
        if(1LL * xRef * yP != 1LL* xP * yRef){
            return false;
        }
        i++;
    }
    return true;
}

int main(){
    vector<vector<int>> coordinates = {{0,0},{0,1},{0,-1}};
    bool ans = checkStraightLine(coordinates);
    cout<<ans;
}