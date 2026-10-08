#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int arraySign(vector<int> nums){
    int sign = 1;
    for(int n : nums){
        if(n > 0){
            sign = 1 * sign;
        }
        else if(n < 0){
            sign = -1 * sign;
        }
        else{
            return 0;
        }
        cout<<sign<<endl;
    }
    if(sign > 0){
        return 1;
    }
    return -1;
}

int main(){
    vector<int> nums = {-1,-2,-3,-4,3,2,1};
    int ans = arraySign(nums);
    cout<<ans;
}