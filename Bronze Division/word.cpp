#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);


    int n {}; // number of words
    cin >> n;

    int k {}; // characters in line
    cin >> k;

    vector<string> words(n);
    for (int i {0}; i < n; ++i) {
        cin >> words[i];
    }

    cout << words[0];

    unsigned long long line {words[0].size()};

    for (int i {1}; i < n; i++) {
        const unsigned long long length {words[i].size()};

        if (line + length <= k) {
            line += length;
            cout << " " << words[i];
        } else {
            line = length;
            cout << "\n" << words[i];
        }
    }
}