#include<iostream>
using namespace std;

int numberOfSteps(int num) {
    int count = 0;
    while(num > 0){
        if(num % 2 == 0){
            num /= 2;
            count++;
        }
        else{
            num--;
            count++;
        }
    }
    return count;
}

int main(){
    int num = 56;
    int ans = numberOfSteps(num);
    cout<<ans;
}