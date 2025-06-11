#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    unordered_map<int, int> positions;
    positions.reserve(n);  // Reserve space for 'n' elements in the unordered_map

    for (int i = 0; i < n; i++) {
        int complement = x - array[i];
        auto it = positions.find(complement);

        if (it != positions.end()) {
            cout << it->second + 1 << " " << i + 1 << endl;  // Adding 1 to the indices as they are 1-based
            return 0;
        }

        positions[array[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}

