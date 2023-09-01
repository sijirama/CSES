#include <iostream>
#include <vector>
using namespace std;

void print(vector<long long> arr) {
    cout << endl;
    for (int i : arr) {
        cout << i << ",  ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        arr.emplace_back(j);
    }

    long long steps = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            long long diff = arr[i - 1] - arr[i];
            steps += diff;
            arr[i] = arr[i] + diff;
        }
    }

    cout << steps;
    // print(arr);
}
