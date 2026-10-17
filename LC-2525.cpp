#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

string categorizeBox(int length, int width, int height, int mass){
    bool r1 = false;
    long long vol = 1LL * length * width * height;
    if(length >= 10000 || width >= 10000 || height >= 10000 || vol >= 1000000000){
        r1 = true;
    }

    if(mass >= 100 && r1){
        return "Both";
    }
    else if(r1){
        return "Bulky";
    }
    else if(mass >= 100){
        return "Heavy";
    }
    return "Neither";
}

int main(){
    int length = 200;
    int width = 50;
    int height = 800;
    int mass = 50;
    string ans = categorizeBox(length, width, height, mass);
    cout<<ans;
}