#include <iostream>
#include <array>
#include <cstdio>
using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    array<int, 4> before{};
    array<int, 4> after {};
    array<int, 3> change {};

    cin >> before[0];
    cin >> after[0];
    cin >> before[1];
    cin >> after[1];
    cin >> before[2];
    cin >> after[2];
    cin >> before[3];
    cin >> after[3];

    change[2] = after[3] - before[3]; // platinum promotions
    before[2] -= change[2];

    change[1] = after[2] - before[2]; // gold promotions
    before[1] -= change[1];

    change[0] = after[1] - before[1];

    for (int i : change) {
        cout << i << "\n";
    }

    return 0;
}