#include <bits/stdc++.h>
using namespace std;

// Mini-Max Sum
// Time Complexity: O(N)
// Auxiliary Space: O(1)

void miniMaxSum(vector<int> arr) {
    long long total = 0;
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 0; i < 5; i++) {
        total += arr[i];

        if (arr[i] < minVal)
            minVal = arr[i];

        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << total - maxVal << " " << total - minVal << endl;
}

int main() {
    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}