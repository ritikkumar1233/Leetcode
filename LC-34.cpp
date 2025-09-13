#include<iostream>
#include<vector>
#include <algorithm>
#include<climits>
using namespace std;

int firstOcc(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int ans = -1;
    while(s<=e){
        int mid  = s + (e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int lastOcc(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int ans = -1;
    while(s<=e){
        int mid  = s + (e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& arr, int target){
    int first = firstOcc(arr, target);
    int last = lastOcc(arr, target);
    return {first, last};
}

int main(){
    vector<int> arr {8,8,8};
    int target = 8;
    vector<int> ans = searchRange(arr, target);
    cout<<ans[0]<<" "<<ans[1];
}