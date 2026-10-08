#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int countBalls(int lowLimit, int highLimit){
    vector<int> arr(50, 0);
    int maxi = 0;
    for(int i = lowLimit; i <= highLimit; i++){
        int sum = 0;
        int d = i;
        while(d > 0){
            int r = d % 10;
            sum += r;
            d /= 10;
        }
        arr[sum]++;
    }
    for(int n : arr){
        maxi = max(maxi, n);
    }
    return maxi;
}

int main(){
    int lowLimit = 6745;
    int highLimit = 28696;
    int ans = countBalls(lowLimit, highLimit);
    cout<<ans;
}