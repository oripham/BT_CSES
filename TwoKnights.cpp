#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++) {
        long long ways;
        if (k < 2) {
            ways = 0;
        } else {
            ways = (long long)k * k * (k * k - 1) / 2 - 4 * (k - 2) * (k - 1);
        }
        cout << ways << endl;
    }

    return 0;
}

