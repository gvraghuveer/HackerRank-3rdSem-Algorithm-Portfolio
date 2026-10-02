#include <bits/stdc++.h>
using namespace std;

// Birthday Cake Candles
// Time Complexity: O(N)
// Auxiliary Space: O(1)

int birthdayCakeCandles(vector<int> candles) {
    int maxHeight = 0;
    int count = 0;

    for (int height : candles) {
        if (height > maxHeight) {
            maxHeight = height;
            count = 1;
        }
        else if (height == maxHeight) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> candles(n);

    for (int i = 0; i < n; i++) {
        cin >> candles[i];
    }

    cout << birthdayCakeCandles(candles) << endl;

    return 0;
}