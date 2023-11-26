#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N {};
    cin >> N;

    vector<int> c(N);

    for (int i {0}; i < N; ++i)
        cin >> c[i];

    sort(c.begin(), c.end());

    unsigned long long money {0};
    int tuition {0};

    for (int i {0}; i < N; ++i) {
        const int k{c[i]};
        const unsigned long long j{(static_cast<unsigned long long>(N) - static_cast<unsigned long long>(i)) * static_cast<unsigned long long>(k)};

        if (j > money) {
            money = {j};
            tuition = {k};
        }
    }

    cout << money << " " << tuition;

    return 0;
}