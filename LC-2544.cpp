#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int alternateDigitSum(int n) {
    vector<int> arr;
    int sum = 0;
    while(n > 0){
        int r = n % 10;
        arr.push_back(r);
        n /= 10;
    }
    int j = 1;
    reverse(arr.begin(), arr.end());
    for(int i : arr){
        cout<<i<<endl;
        if(j & 1){
            sum += i;
        }
        else{
            sum -= i;
        }
        j++;
    }
    return sum;
}

int main(){
    int n = 10;
    int ans = alternateDigitSum(n);
    cout<<ans;
}