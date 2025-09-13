#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &arr){
    int count = 0;
    int max_c = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == 1){
            count++;
            max_c = max(max_c, count);
        }
        else{
            count = 0;
        }
    }
    return max_c;
}

int main(){
    vector<int> arr {1,1,0,1,1,1};
    int ans = findMaxConsecutiveOnes(arr);
    cout<<ans;
}