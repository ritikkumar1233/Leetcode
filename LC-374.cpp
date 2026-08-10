#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int pick = 6;
    int res = -1;
    int s = 1;
    int e = n;
    int mid = s+(e-s)/2;
    while(s <= e){
        if(res == 0){
            return mid;
        }
        else if(res == -1){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
     -1;  
}