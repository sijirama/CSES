#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> v;
    for (int i = 0; i < n; i++) {
        v.push_back(i + 1);
    }
    vector<long long> arr;
    for (int i = 0; i < n - 1; i++) {
        long long j;
        cin >> j;
        arr.emplace_back(j);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (v[i] != arr[i]) {
            cout << v[i];
            break;
        }
    }
}
