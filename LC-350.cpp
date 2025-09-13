#include<iostream>
#include<vector>
#include<algorithm>
// #include<climits>
using namespace std;

vector<int> intersection(vector<int> &arr1, vector<int> &arr2){
    vector<int> result;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0, j = 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] == arr2[j]){
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    return result;
}

int main(){
    vector<int> arr1 {1,2,2,1};
    vector<int> arr2 {2, 2};
    vector<int> ans = intersection(arr1, arr2);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}