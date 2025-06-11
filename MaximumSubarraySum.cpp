#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    long long max_sum = array[0];  
    long long current_sum = array[0];  

    for (int i = 1; i < n; i++) {
        current_sum = max((long long)array[i], current_sum + array[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << endl;
    return 0;
}

