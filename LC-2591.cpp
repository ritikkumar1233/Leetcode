#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int distMoney(int money, int children) {
    if (money < children) return -1;
    if (money > 8 * children) return children - 1;

    money -= children;

    int count = money / 7;
    int remaining = money % 7;

    if (count >= children) {
        if (remaining == 0) return children;
        return children - 1;
    }

    if (count == children - 1 && remaining == 3) {
        return count - 1;
    }
    return count;
}

// int distMoney(int money, int children){
//     if(money < children){
//         return -1;
//     }
//     if(money - children < 7){
//         return 0;
//     }
//     int count = 0;
//     int i = 0;
//     while(i < children){
//         money -= 8;
//         if(money < 8){
//             break;
//         }
//         if(money - 8 == 4){
//             money -= 9;
//         }
        
//         else{
            
//         }
//         i++;
//     }
//     return count;
// }

int main(){
    int money = 12;
    int children = 3;
    int ans = distMoney(money, children);
    cout<<ans;
}