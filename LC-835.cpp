#include<iostream>
#include<vector>
using namespace std;

int largestOverlap(vector<vector<int>> img1, vector<vector<int>> img2){
    int n = img1.size();
    

    cout<<endl;
}

int main(){
    vector<vector<int>> img1 = {{1,1,0},{0,1,0},{0,1,0}};
    vector<vector<int>> img2 = {{0,0,0},{0,1,1},{0,0,1}};
    int ans = largestOverlap(img1, img2);
    cout<<ans;
}