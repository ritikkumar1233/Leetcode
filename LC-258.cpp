#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

// int addDigits(int num){
//     int sum = 0;
//     int i = 0;
//     while(i < 4){
//         int rem=num%10;
//         sum=sum+rem;
//         num=num/10;
//         if(num ==  0){
//             num = sum;
//             sum = 0;
//         }
//         i++;
//         cout<<num<<" "<<sum<<endl;
//     }
//     return sum;
// }


int addDigits(int num){
    return 1 + (num - 1) % 9;
}

int main(){
    int num = 38;
    int ans = addDigits(num);
    cout<<ans;
}