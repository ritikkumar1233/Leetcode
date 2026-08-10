#include<iostream>
#include<vector>
using namespace std;

char nextGratestLetter(vector<char> letters, char target){
    int n = letters.size();
    int s = 0;
    int e = n-1;
    char ans = letters[0];
    while(s<=e){
        int mid = s+(e-s)/2;
        if(letters[mid] == target){
            s = mid+1;
        }
        else if(letters[mid] > target){
            e = mid-1;
            ans = letters[mid];
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<char> letters = {'a','c','f','j','m','z'};
    char target = 'y';
    char ans = nextGratestLetter(letters, target);
    cout<<ans;
}