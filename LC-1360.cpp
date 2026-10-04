#include<algorithm>
#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<stack>
using namespace std;

int totalDaysYear(string date){
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));
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
    return totalDays;
}

int daysBetweenDates(string date1, string date2){
    int t1 = totalDaysYear(date1);
    int t2 = totalDaysYear(date2);
    return abs(t2 - t1);
}

int main(){
    string date1 = "2020-01-15";
    string date2 = "2019-12-31";
    int ans = daysBetweenDates(date1, date2);
    cout<<ans;
}