#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long k = 1; k <= n; k++) {
        long long ways_diff_color = k * k * (k * k - 1) / 2;
        long long ways_same_color = 0;
        if (k > 2) {
            ways_same_color = (k - 2) * (k - 1) * 4;
        }
        long long total_ways = ways_diff_color - ways_same_color;
        cout << total_ways << endl;
    }

    return 0;
}
