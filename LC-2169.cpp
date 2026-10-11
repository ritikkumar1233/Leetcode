#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int countOperations(int num1, int num2) {
        if(num1 == 0 || num2 == 0){
            return 0;
        }
        int count = 0;
        while(num1 > 0 || num2 > 0){
            if(num1 > num2){
                num1 = num1 - num2;
            }
            else if(num2 > num1){
                num2 = num2 - num1;
            }
            else{
                num1 = 0;
                num2 = 0;
            }
            count++;
        }
    return count;
}

int main(){
    int num1 = 10;
    int num2 = 20;
    int ans = countOperations(num1, num2);
    cout<<ans;
}