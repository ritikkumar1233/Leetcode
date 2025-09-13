#include<iostream>
#include<vector>
using namespace std;

int maximumCount(vector<int> &arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int posCount = 0;
    int negCount = 0;
    while(s<=e){
        int mid = s+(e-s)/2;
        
        if(arr[mid]>=0 && arr[mid-1]<0){
            posCount = n - mid;
            negCount = n - posCount;
            if(posCount > negCount){
                return posCount;
            }
            else{
                return negCount;
            }
        }
        else if(arr[mid]<0){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
}

int main(){
    vector<int> arr{1,2,3,4};
    int ans = maximumCount(arr);
    cout<<ans;
}