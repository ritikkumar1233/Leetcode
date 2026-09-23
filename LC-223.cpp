#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
    int aArea = (ax1 - ax2) * (ay1 - ay2);
    int bArea = (bx1 - bx2) * (by1 - by2);
    cout<<aArea<<" "<<bArea<<endl;
    int cWidth = max(0, min(ax2, bx2) - max(ax1, bx1));
    cout<<cWidth<<endl;
    int cHeight = max(0, min(ay2, by2) - max(ay1, by1));
    cout<<cHeight<<endl;
    int cArea = cWidth * cHeight;
    return aArea + bArea - cArea;
}

int main(){
    int ax1 = -2;
    int ay1 = -2;
    int ax2 = 2;
    int ay2 = 2;
    int bx1 = 3;
    int by1 = 3;
    int bx2 = 4;
    int by2 = 4;
    int ans = computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
    cout<<ans;
}

