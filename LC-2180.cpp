#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int countEven(int num){
    int count = 0;
    for(int i = 1; i <= num; i++){
        int sum = 0;
        int d = i;
        while(d > 0){
            int r = d % 10;
            sum += r;
            d /= 10;
        }
        if(sum % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int num = 30;
    int ans = countEven(num);
    cout<<ans;
}