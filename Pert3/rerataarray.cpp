#include <bits/stdc++.h>
using namespace std;

int main() {
    int nilai[5], sum = 0;
    float avg;

    for(int i = 0; i < 5; i++) {
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai[i];

        sum += nilai[i];
    }

    avg = sum / 5.0;

    cout << endl;
    cout << "Total nilai: " << sum << endl;
    cout << "Rata-rata nilai: " << avg << endl;

    return 0;
}
