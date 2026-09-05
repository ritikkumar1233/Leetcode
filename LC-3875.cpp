#include<iostream>
#include<vector>
using namespace std;

bool uniformArray(vector<int> nums1){
    int n = nums1.size();
    vector<int> nums2;
    bool even = true;
    bool odd = true;
    for(int i = 0; i<n; i++){
        if(nums1[i] % 2 == 0){
            odd = false;
        }
        else if(nums1[i] % 2 != 0){
            even = false;
        }
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    if(odd || even){
        return true;
    }
    else{
        for(int i = 0; i<n-1; i++){
            if(nums1[i] % 2 == 0 && nums1[i+1] % 2 == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    vector<int> nums1 = {2, 4, 7};
    bool ans = uniformArray(nums1);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}