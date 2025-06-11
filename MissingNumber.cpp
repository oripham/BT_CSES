#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long totalSum = (1LL * n * (n + 1)) / 2;
    long long givenSum = 0;

    for (int i = 0; i < n - 1; i++) {
        int num;
        cin >> num;
        givenSum += num;
    }

    long long missingNumber = totalSum - givenSum;
    cout << missingNumber << endl;

    return 0;
}

