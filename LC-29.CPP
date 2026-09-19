#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int divide(int dividend, int divisor) {
    if (dividend == 0) {
        return 0;
    }

    // Special overflow case
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    bool negative = (dividend < 0) ^ (divisor < 0);

    long long divid = llabs((long long)dividend);
    long long divis = llabs((long long)divisor);

    long long sum = divis;
    long long res = 0;
    long long count = 1;
    long long f = 0;

    while (divid >= divis) {

        if (sum <= divid) {
            res = sum;
        }

        // Prevent unnecessary overflow
        if (sum <= divid / 2) {
            sum += sum;
            count += count;
        }
        else {
            divid -= res;
            f += count;

            sum = divis;
            count = 1;
        }
    }

    if (negative) {
        return -f;
    }

    return f;
}

// int divide(int dividend, int divisor){
//     int divid = abs(dividend);
//     int divis = abs(divisor);
//     int sum = divis;
//     int res = 0;
//     int count = 1;
//     int f = 0;
//     while(divid >= divis){
//         if(sum <= divid){
//             res = sum;
//         }
//         sum += sum;
//         if(sum > divid){
//             divid -= res;
//             sum = divis;
//             f += count;
//             count = 1;
//         }
//         else{
//             count += count;
//         }
//     }
//     if( (dividend < 0 && divisor < 0 ) || (dividend > 0 && divisor > 0) ){
//         return f;
//     }
//     else{
//         return -f;
//     }
    
// }


int main(){
    int dividend = -2147483648;
    int divisor = -1;
    int ans = divide(dividend, divisor);
    cout<<ans;
}