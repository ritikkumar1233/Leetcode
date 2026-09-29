#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<stack>
using namespace std;

int dayOfYear(string date){
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));
    for(int i = 0; i < month - 1; i++){
        day += days[i];
    }
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if(month > 2 && leap) day++;
    return day;
}

int main(){
    string date = "2000-12-04";
    int ans = dayOfYear(date);
    cout<<ans;
}

