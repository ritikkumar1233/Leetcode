#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

// int divisorSubstrings(int num, int k) {
//     int count = 0;
//     int n = num;
//     double p = pow(10,k);
//     while(n >= p / 10){
//         int r = n % long(p);
//         cout<<r<<endl;
//         if(r != 0 && num % r == 0){
//             count++;
//         }
//         n /= 10;
//         cout<<n<<endl;
//     }
//     return count;
// }

int divisorSubstrings(int num, int k) {
    int count = 0;
    int divisor = 1;

    for (int i = 0; i < k; i++)
        divisor *= 10;

    int window = num % divisor;
    int n = num;

    while (n >= divisor / 10) {
        if (window != 0 && num % window == 0)
            count++;

        n /= 10;
        window = n % divisor;
    }

    return count;
}

int main(){
    int num = 240;
    int k = 2;
    int ans = divisorSubstrings(num, k);
    cout<<ans;
}