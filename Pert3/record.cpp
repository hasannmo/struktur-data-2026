#include <bits/stdc++.h>
using namespace std;

struct mahasiswa {
    string nim, nama, prodi;
    float ipk;
};

int main() {
    mahasiswa mhs1;
    cin >> mhs1.nim >> mhs1.nama >> mhs1.prodi >>mhs1.ipk;

    cout << endl;
    cout << "NIM mhs1 \t: " << mhs1.nim << endl;
    cout << "NAMA mhs1 \t: " << mhs1.nama << endl;
    cout << "PRODI mhs1 \t: " << mhs1.prodi << endl;
    cout << "IPK mhs1 \t: " << mhs1.ipk << endl;

    return 0;
}
