#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

// int countTriples(int n){
//     int count = 0;
//     for(int i = 1; i <= n; i++){
//         for(int j = i + 1; j <= n; j++){
//             int s = i * i + j * j;
//             int d = sqrt(s);
//             cout<<s<<" "<<d * d<<endl;
//             if(s == d * d){
//                 count++;
//             }
//         }
//     }
//     return count * 2;
// }

int countTriples(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int s = i * i + j * j;
            int d = sqrt(s);

            if (d <= n && s == d * d) {
                count++;
            }
        }
    }

    return count * 2;
}

int main(){
    int n = 18;
    int ans = countTriples(n);
    cout<<ans;
}