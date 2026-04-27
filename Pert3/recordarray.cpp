#include <bits/stdc++.h>
using namespace std;

struct mahasiswa {
    int umur;
    string nrp, nama, jurusan, hobi[3];
};

int main() {
    mahasiswa mhs[3];

    for(int i = 0; i < 3; i++) {
        cout << "Data mahasiswa ke-" << i + 1 << ": \n";

        cout << "NRP \t: ";
        cin >> mhs[i].nrp;

        cout << "Nama \t: ";
        cin >> mhs[i].nama;

        cout << "Jurusan\t: ";
        cin >> mhs[i].jurusan;

        cout << "Umur \t: ";
        cin >> mhs[i].umur;

        cout << "Masukkan tiga hobi: \n";
        for(int j = 0; j < 3; j++) {
            cout << "Hobi ke-" << j + 1 << ": ";
            cin >> mhs[i].hobi[j];
        }

        cout << "\n";
    }

    cout << "\n===== DATA MAHASISWA =====\n" ;

    for(int i = 0; i < 3; i++) {
        cout << "Mahasiswa ke-" << i + 1 << ": " <<endl;
        cout << "NRP \t: " << mhs[i].nrp << endl;
        cout << "Nama \t: " << mhs[i].nama << endl;
        cout << "Jurusan\t: " << mhs[i].jurusan << endl;
        cout << "Umur \t: " << mhs[i].umur << endl;

        cout << "Hobi: ";
        for(int j = 0; j < 3; j++) {
            cout << mhs[i].hobi[j];

            if(j < 2) cout << ", ";
        }

        cout << endl << endl;
    }

    return 0;
}
