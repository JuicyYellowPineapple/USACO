#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k; // vertical, horizontal, scale
    cin >> m >> n >> k;
    cin.ignore();
    
    for (int i {0}; i < m; ++i) {
        string cowsignal_line {};
        getline(cin >> ws, cowsignal_line);
        
        string cowsignal_line_k {};
        
        for (int j {0}; j < n; ++j) {
            const char uni {cowsignal_line[j]};
            for (int q {0}; q < k; ++q) {
                cowsignal_line_k += uni;
            }
        }
        
        for (int p {0}; p < k; ++p) {
            cout << cowsignal_line_k << "\n";
        }
    }
    
    return 0;
}
