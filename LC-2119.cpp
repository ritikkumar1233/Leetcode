#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

bool isSameAfterReversals(int num) {
    if(num % 10 != 0 || num == 0){
        return true;
    }
    return false;
}

int main(){
    int num = 9989;
    bool ans = isSameAfterReversals(num);
    cout<<ans;
}