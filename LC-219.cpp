//  Sliding window

#include<iostream>
#include<vector>
using namespace std;

bool containsNearbyDuplicate(vector<int> &arr, int k){
    for(int i = 0; i<arr.size()-1; i++){
        int j = i+1;
        if(arr[i] == arr[j]){
            if(abs(i-j) <= k){
                return true;
            }
        }
        j++;
    }
    return false;
}

int main(){
    vector<int> arr{1,2,3,1};
    int k = 3;
    bool ans = containsNearbyDuplicate(arr, k);
    if(ans == 0) cout<<"false";
    else cout<<"true";
}