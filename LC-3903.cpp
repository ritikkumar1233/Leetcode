#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstStableIndex(vector<int> nums, int k){
    int n = nums.size();
    for(int i = 0; i<n; i++){
        int max = *max_element(nums.begin(), nums.begin()+i+1);
        int min = *min_element(nums.begin()+i, nums.end());
        // cout<<"max:"<<max<<"  "<<"min:"<<min<<endl;
        if((max - min) <= k){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {10, 20, 15, 1};
    int k = 5;
    int ans = firstStableIndex(nums, k);
    cout<<ans;
}