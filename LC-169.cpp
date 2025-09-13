#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int> arr){
    sort(arr.begin(), arr.end());
    int count = 1;
    int max_count = 1;
    int ans = arr[0];
    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i] == arr[i+1]){
            count++;
            if(max_count < count){
                max_count = count;
                ans = arr[i];
            }
        }
        else{
            count = 1;
        }
    }
    if(max_count > arr.size()/2) return ans;
    else return -1;
}

int main(){
    vector<int> arr = {2, 2, 2, 1, 1, 1, 2};
    int res = majorityElement(arr);
    cout<<res;
}