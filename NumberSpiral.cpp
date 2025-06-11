#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int y, x;
        cin >> y >> x;
        int max_coord = max(x, y);
        long long result = 0;

        if (x >= y) {
            if (max_coord % 2 == 1) {
                result = (long long)max_coord * max_coord - y + 1;
            } else {
                result = (long long)(max_coord - 1)  * (max_coord - 1)  + y;
            }
        } else {
            if (max_coord % 2 == 1) {
                result = (long long)(max_coord - 1) * (max_coord - 1) + x;
            } else {
                result = (long long)max_coord * max_coord - x + 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}

