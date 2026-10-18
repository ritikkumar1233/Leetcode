#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int minMaxDifference(int num){
    vector<int> arr;
    int d = num;
    while(d > 0){
        int r = d % 10;
        arr.push_back(r);
        d /= 10;
    }
    reverse(arr.begin(), arr.end());
    int f = -1;
    for(int a : arr){
        if(a != 9){
            f = a;
            break;
        }
    }
    
    string maxi = "";
    string mini = "";
    for(int a : arr){
        if(f == a && a != 9){
            maxi += '9';
            f = a;
        }
        else{
            maxi += a + '0';
        }
    }
    int s = arr[0];
    for(int b : arr){
        if(s == b){
            mini += '0';
        }
        else{
            mini += b + '0';
        }
    }
    return stoi(maxi) - stoi(mini);
}

int main(){
    int num = 11891;
    int ans = minMaxDifference(num);
    cout<<ans;
}