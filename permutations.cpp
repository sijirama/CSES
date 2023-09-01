#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define skip cout << endl

int main() {
    long long n;
    cin >> n;

    if (n == 1) {
        cout << n << endl;
        return 0;
    }

    if (n <= 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<long long> beautiful;

    for (long long i = 2; i <= n; i += 2) {
        beautiful.push_back(i);
    }

    for (long long i = 1; i <= n; i += 2) {
        beautiful.push_back(i);
    }

    for (auto num : beautiful) {
        cout << num << " ";
    }

    skip;
    return 0;
}
