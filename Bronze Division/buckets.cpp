#include <iostream>
#include <array>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    array<int, 3> barn {}; array<int, 3> lake {}; array<int, 3> rock {};

    for (int p {0}; p < 10; p++) {
        for (int q {0}; q < 10; q++) {
            char i {};
            cin >> i;

            if (lake[2] == true && barn[2] == true && rock[2] == true) {
                break;
            }

            if (i == '.') {
                continue;
            }

            if (i == 'B') {
                barn[0] = {q};
                barn[1] = {p};
                barn[2] = {true};
                continue;
            }

            if (i == 'L') {
                lake[0] = {q};
                lake[1] = {p};
                lake[2] = {true};
                continue;
            }

            if (i == 'R') {
                rock[0] = {q};
                rock[1] = {p};
                rock[2] = {true};
                continue;
            }
        }

        if (lake[2] == true && barn[2] == true && rock[2] == true) {
            break;
        }
    }

    const int a {abs(barn[0] - lake[0])};
    const int b {abs(barn[1] - lake[1])};

    if ((barn[0] == lake[0] || barn[1] == lake[1]) && (a + b) == (abs(rock[0] - lake[0]) + abs(rock[1] - lake[1]) + abs(barn[0] - rock[0]) + abs(barn[1] - rock[1]))) {
        const int cows {a + b + 1};
        cout << cows;
    } else {
        const int cows {a + b - 1};
        cout << cows;
    }

    return 0;
}
