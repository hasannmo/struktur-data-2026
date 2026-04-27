#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 7};

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
        cout << "idx: " << &arr[i] << endl;
    }

    return 0;
}
