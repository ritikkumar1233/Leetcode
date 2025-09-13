#include<iostream>
using namespace std;

// int removeDuplicates(int arr[], int n){
//     if(n == 0){
//         return 0;
//     }
//     else if(n == 1){
//         return 1;
//     }
//     int i = 0, count = 1;
//     while(i<n){
//         int j = i+1;
//         if(arr[i] != arr[j]){
//             count++;
//         }
//         i++;
//         j++;
//     }
//     return count;
// }


int removeDuplicates(int arr[], int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int i = 1;
    for(int j = 1; j<n; j++){
        if(arr[j] != arr[i-1]){
            arr[i]=arr[j];
            i++;
        }
    }
    return i;
}

int main(){
    int n = 10;
    int arr[n] = {0,0,1,1,1,2,2,3,3,4};
    int r = removeDuplicates(arr, n);
    cout<<r;
}