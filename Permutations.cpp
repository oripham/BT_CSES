#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1" << endl;
    } else if (n <= 3) {
        cout << "NO SOLUTION" << endl;
    } else {

        int even[n], odd[n];
        int evenCount = 0, oddCount = 0;


        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                even[evenCount++] = i;
            } else {
                odd[oddCount++] = i;
            }
        }

        for (int i = 0; i < evenCount; i++) {
            cout << even[i] << " ";
        }
        for (int i = 0; i < oddCount; i++) {
            cout << odd[i];
            if (i < oddCount - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

