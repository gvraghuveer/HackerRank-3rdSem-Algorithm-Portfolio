#include <bits/stdc++.h>
using namespace std;

int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());

    int count = 0;
    int total = 0;

    for (int price : prices) {
        if (total + price > k)
            break;

        total += price;
        count++;
    }

    return count;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << maximumToys(prices, k) << endl;

    return 0;
}