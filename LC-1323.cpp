#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maximum69Number(int n){
    vector<int> num;
    int maxi = n;
    
    while(n > 0){
        int r = n % 10;
        num.push_back(r);
        n /= 10;
    }
    cout<<endl;
    for(int i = num.size() - 1; i >= 0; i--){
        int digit = 0;
        if(num[i] == 9){
            num[i] = 6;
        }
        else{
            num[i] = 9;
        }
        for(int j = num.size() - 1; j >= 0; j--){
            digit = digit * 10 + num[j];
        }
        maxi = max(maxi, digit);
        if(num[i] == 9){
            num[i] = 6;
        }
        else{
            num[i] = 9;
        }
    }
    return maxi;
}

int main(){
    int n = 9999;
    int ans = maximum69Number(n);
    cout<<ans;
}