#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

string dayOfTheWeek(int day, int month, int year){
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> week = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int y = year - 1;
    int leapYears = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 - (1970 / 4 - 1970 / 100 + 1970 / 400);
    int totalDays = (year - 1971) * 365 + leapYears;
    
    for(int i = 0; i < month - 1; i++){
        totalDays += days[i];
    }
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if(leap && month > 2){
        totalDays++;
    }
    totalDays += day - 1;
    return week[totalDays % 7];
}

int main(){
    int day = 15;
    int month = 8;
    int year = 1993;
    string ans = dayOfTheWeek(day, month, year);
    cout<<ans;
}