#include <iostream>
#include <array>
#include <cstdio>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    // capacity, amount
    array<int, 2> bessie {};
    array<int, 2> elsie {};
    array<int, 2> mildred {};

    for (int i {0}; i < 2; ++i) {
        cin >> bessie[i];
    }

    for (int i {0}; i < 2; ++i) {
        cin >> elsie[i];
    }

    for (int i {0}; i < 2; ++i) {
        cin >> mildred[i];
    }

    int j {1};
    for (int i = 0; i < 100; ++i) {
        if (j % 3 == 1 || j % 3 == -1) { // bessie --> elsie
            const int k {elsie[0] - elsie[1]};

            if (k >= bessie[1]) {
                elsie[1] += bessie[1];
                bessie[1] = 0;
            } else {
                elsie[1] +=k;
                bessie[1] -= k;
            }

            ++j;

            continue;
        }

        if (j % 3 == 2 || j % 3 == -2) { // elsie --> mildred
            const int k {mildred[0] - mildred[1]};

            if (k >= elsie[1]) {
                mildred[1] += elsie[1];
                elsie[1] = 0;
            } else {
                mildred[1] +=k;
                elsie[1] -= k;
            }

            ++j;

            continue;
        }

        if (j % 3 == 0) { // mildred --> bessie
            const int k {bessie[0] - bessie[1]};

            if (k >= mildred[1]) {
                bessie[1] += mildred[1];
                mildred[1] = 0;
            } else {
                bessie[1] +=k;
                mildred[1] -= k;
            }

            ++j;

            continue;
        }
    }

    cout << bessie[1] << "\n" << elsie[1] << "\n" << mildred[1] << "\n";
}