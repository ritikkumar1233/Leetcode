#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int heightChecker(vector<int> heights){
    vector<int> arr{heights};
    sort(heights.begin(), heights.end());
    int count = 0;
    for(int i = 0; i<heights.size(); i++){
        if(heights[i] != arr[i]){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> heights{5,1,2,3,4};
    int ans = heightChecker(heights);
    cout<<ans;
}