#include<iostream>
#include<vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> arr){
    vector<int> res;
    for(int i = 0; i<arr.size(); i++){
        int index = abs(arr[i])-1;
        if(arr[index] > 0){
            arr[index] = -arr[index];
        }1
    }
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] > 0){
            res.push_back(i+1);
        }
    }
    return res;
}

int main(){
    vector<int>arr {1, 1};
    vector<int> res = findDisappearedNumbers(arr);
    for(int i = 0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}