#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> constructRectangle(int area){
    int sqr = sqrt(area);
    for(int i = sqr; i > 0; i--){
        if(area % i == 0){
            return {(area / i), i};
        }
    }
    return {area, 1};
}

int main(){
    int area = 36;
    vector<int> ans = constructRectangle(area);
    for(int i : ans){
        cout<<i<<" ";
    }
}