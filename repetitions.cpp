#include <algorithm>
#include <iostream>
#include <map>
#include <ostream>
#include <string>

using namespace std;

int main() {
    std::string DNA;
    cin >> DNA;

    int currentrepetition = 1;
    int maxrepetition = 1;

    for (int i = 1; i < DNA.length(); i++) {
        if (DNA[i] == DNA[i - 1]) {
            currentrepetition++;
            maxrepetition = max(currentrepetition, maxrepetition);
        } else {
            currentrepetition = 1;
        }
    }
    cout << maxrepetition;
}
