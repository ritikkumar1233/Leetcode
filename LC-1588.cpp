#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr){
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        int c = ((i + 1) * (n - i) + 1) / 2;
        sum += arr[i] * c;
    }
    return sum;
}

int main(){
    vector<int> arr = {10, 11, 12};
    int ans = sumOddLengthSubarrays(arr);
    cout<<ans;
}