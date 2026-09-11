#include<iostream>
#include<vector>
using namespace std;

int countStudents(vector<int> students, vector<int> sandwiches){
    int n = students.size();
    int count0 = 0;
    int count1 = 0;
    for(int i : students){
        if(i == 0) count0++;
        else count1++;
    }
    int i = 0;
    while(i<n){
        if(sandwiches[i] == 0){
            if(count0 == 0){
                break;
            }
            count0--;
        }
        else{
            if(count1 == 0){
                break;
            }
            count1--;
        }
        i++;
        cout<<count0<<" "<<count1<<endl;
    }
    return count0 + count1;
}

int main(){
    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};
    int ans = countStudents(students, sandwiches);
    cout<<ans;
}

// int countStudents(vector<int> students, vector<int> sandwiches){
//     int n = students.size();
//     int i = 0;
//     int j = 0;
//     int rem = n;
//     int e = n+n;
//     while(j < n && i <= e+1){
//         cout<<i<<" "<<j<<" "<<endl;
//         if(students[i % n] == sandwiches[j]){
//             students[i % n] = -1;
//             j++;
//             rem--;
//             cout<<rem<<endl;
//         }
//         i++;
//     }
//     return rem;
// }