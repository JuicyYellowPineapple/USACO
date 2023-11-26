#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    array<int, 7> combinations {};

    for (int i = 0; i < 7; ++i) {
        cin >> combinations[i];
    }

    sort(combinations.begin(), combinations.end());

    const int a {combinations[6] - combinations[5]};
    const int b {combinations[6] - combinations[4]};

    if (combinations[6] == (combinations[0] + combinations[1] + combinations[2])) {
        cout << a << " ";
        cout << b << " ";
        cout << combinations[2];
    } else {
        cout << a << " ";
        cout << b << " ";
        cout << combinations[3];
    }
}