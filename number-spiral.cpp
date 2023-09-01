#include <algorithm>
#include <cmath>
#include <iostream>
#include <ostream>
#include <stdlib.h>
#include <utility>
#include <vector>

using namespace std;

int main() {
    long long t;
    cin >> t;
    vector<pair<long long, long long>> table;
    for (int i = 0; i < t; i++) {
        long long y, x;
        cin >> y >> x;
        table.push_back({y, x});
    }

    for (auto i : table) {
        long long level = max(i.first, i.second);
        long long zeroFigure = (level * (level - 1)) + 1;
        if (i.first == i.second) {
            cout << zeroFigure << endl;
            continue;
        }
        long long answer = 0;
        long long index = i.first - i.second;
        if (level % 2 == 0) {
            if (index < 0) {
                answer = zeroFigure - abs(index);
            } else {
                answer = zeroFigure + abs(index);
            }
        } else { // if the level is odd.
            if (index < 0) {
                answer = zeroFigure + abs(index);
            } else {
                answer = zeroFigure - abs(index);
            }
        }
        cout << answer << endl;
    }
}
