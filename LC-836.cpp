#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isRectangleOverlap(vector<int> rec1, vector<int> rec2){
    int cw = min(rec1[2], rec2[2]) - max(rec1[0], rec2[0]);
    int ch = min(rec1[3], rec2[3]) - max(rec1[1], rec2[1]);
    if(cw > 0 && ch > 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    vector<int> rec1 = {0,0,1,1};
    vector<int> rec2 = {2,2,3,3} ;
    bool ans = isRectangleOverlap(rec1, rec2);
    cout<<ans;
}