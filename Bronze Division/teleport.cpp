#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a {}, b {}, x {}, y {};
    cin >> a >> b >> x >> y;

    int p {abs(a - b)};
    int q {abs(a - x) + abs(b - y)};
    int r {abs(a - y) + abs(b - x)};

    int m = p < q ? p : q;
    m = m < r ? m : r;

    cout << m;

    return 0;
}
