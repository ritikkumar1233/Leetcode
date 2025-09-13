#include<iostream>
using namespace std;

int removeElement(int arr[], int n, int val){
    if(n == 0){
        return 0;
    }
    int j = n-1;
    int i = 0;
    while(i<=j){
        if(arr[j] == val){
            j--;
        }
        else if(arr[i] == val){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else{
            i++;
        }
    }
    return j+1;
}

int main(){
    int arr[] = {2, 1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = 2;
    int r = removeElement(arr, n, val);
    cout<<r<<endl;
    for(int i = 0; i<r; i++){
        cout<<arr[i]<<" ";
    }
}