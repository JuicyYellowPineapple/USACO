#include <iostream>
#include <cstdio>
#include <array>
using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    array<int, 3> a {1, 0, 0};
    array<int, 3> b {0, 1, 0};
    array<int, 3> c {0, 0, 1};

    int swaps {};
    cin >> swaps;

    int a_points {0}, b_points {0}, c_points {0};

    for (int i {0}; i < swaps; ++i) {
        int j {}, k {}, g {};
        cin >> j >> k >> g;

        int value_a {a[j - 1]};
        int value_b {b[j - 1]};
        int value_c {c[j - 1]};

        a[j - 1] = a[k - 1];
        b[j - 1] = b[k - 1];
        c[j - 1] = c[k - 1];

        a[k - 1] = value_a;
        b[k - 1] = value_b;
        c[k - 1] = value_c;

        if (a[g - 1] == 1) {
            ++a_points;
        }

        if (b[g - 1] == 1) {
            ++b_points;
        }

        if (c[g - 1] == 1) {
            ++c_points;
        }
    }

    int greatest = (a_points > b_points) ? a_points : b_points;
    greatest = (greatest > c_points) ? greatest : c_points;

    cout << greatest;
}