#include <bits/stdc++.h>
using namespace std;

int get_min(int arr[], int n) {
    int res = arr[0];
    for(int i = 0; i < n; i++) res = min(res, arr[i]);

    return res;
}

int get_max(int arr[], int n) {
    int res = arr[0];
    for(int i = 0; i < n; i++) res = max(res, arr[i]);

    return res;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Minimum element of array: " << get_min(arr, n) << endl;
    cout << "Maximum element of array: " << get_max(arr, n) << endl;

    return 0;
}
