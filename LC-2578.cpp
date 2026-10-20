#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int splitNum(int num){
    vector<int> arr;
    while(num > 0){
        arr.push_back(num % 10);
        num /= 10;
    }
    sort(arr.begin(), arr.end());
    int num1 = 0;
    int num2 = 0;
    for(int i = 0; i < arr.size(); i++){
        if(i & 1){
            num1 = 10 * num1 + arr[i];
        }
        else{
            num2 = 10 * num2 + arr[i];
        }
    }
    return num1 + num2;
}

int main(){
    int num = 687;
    int ans = splitNum(num);
    cout<<ans;
}