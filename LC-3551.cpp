#include<algorithm>
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;


int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int minSwaps(vector<int>& nums) {
    int n = nums.size();
    vector<pair<int, int>> arr;

    for (int i = 0; i < n; i++) {
        arr.push_back({nums[i], i});
    }

    sort(arr.begin(), arr.end(), [&](auto a, auto b) {
        int s1 = digitSum(a.first);
        int s2 = digitSum(b.first);

        if (s1 == s2)
            return a.first < b.first;
        return s1 < s2;
    });

    vector<bool> visited(n, false);
    int swaps = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] || arr[i].second == i) continue;

        int cycleSize = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = true;
            j = arr[j].second;
            cycleSize++;
        }
        if (cycleSize > 1) swaps += cycleSize - 1;
    }

    return swaps;
}


int main(){
    vector<int> nums = {37, 100, 5};
    int ans = minSwaps(nums);
    cout<<ans;
}