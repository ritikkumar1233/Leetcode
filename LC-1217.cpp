#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int minCostToMoveChips(vector<int> position){
    int oddChips = 0;
    int evenChips = 0;
    for(int num : position){
        if(num % 2 == 0){
            evenChips++;
        }
        else{
            oddChips++;
        }
    }
    return min(evenChips, oddChips);
}

int main(){
    vector<int> position = {2,2,2,3,3,3,4};
    int ans = minCostToMoveChips(position);
    cout<<ans;
}