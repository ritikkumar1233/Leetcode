#include<iostream>
#include<vector>
using namespace std;

int totalNumbers(vector<int> digits){
    vector<int> freq(10);
    int count = 0;
    for(int i : digits){
        freq[i]++;
    }
    cout<<endl;
    for(int i = 1; i<10; i++){
        if(freq[i] > 0){
            freq[i]--;
            for(int j = 0; j<10; j++){
                if(freq[j] > 0){
                    freq[j]--;
                    for(int k = 0; k<9; k+=2){
                        if(freq[k] > 0){
                            count++;
                        }
                    }
                    freq[j]++;
                }
            }
            freq[i]++;
        }
    }
    return count;
}

int main(){
    vector<int> digits = {6,6,6};
    int ans = totalNumbers(digits);
    cout<<ans;
}