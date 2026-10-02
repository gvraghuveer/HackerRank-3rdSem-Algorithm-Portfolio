#include <iostream>
#include <vector>
using namespace std;

/*
Problem 4: Binary Search

Problem Statement:
Given a sorted array of integers and a target value, implement
the Binary Search algorithm to find the index of the target element.
If the target element is present, return its index; otherwise,
return -1.

Approach:
Binary Search repeatedly checks the middle element of the sorted
array and eliminates half of the remaining search space.

Time Complexity: O(log N)
Auxiliary Space Complexity: O(1)
*/

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}