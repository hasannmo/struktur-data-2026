#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    char arr[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> arr[i][j];

    string cari;
    cin >> cari;
    int len = cari.length();
    int lim = n - len + 1;

    //hor
    for(int i=0; i<n; i++){
        for(int j=0; j<lim; j++){
            bool match = true;
            for(int k=0; k<len; k++){
                if(arr[i][j+k]!=cari[k]){ match=false; break; }
            }
            if(match) goto found;
        }
    }
    //ver
    for(int i=0; i<n; i++){
        for(int j=0; j<lim; j++){
            bool match = true;
            for(int k=0; k<len; k++){
                if(arr[j+k][i]!=cari[k]){ match=false; break; }
            }
            if(match) goto found;
        }
    }
    //dia
    for(int i=0; i<lim; i++){
        for(int j=0; j<lim; j++){
            bool match = true;
            for(int k=0; k<len; k++){
                if(arr[i+k][j+k]!=cari[k]){ match=false; break; }
            }
            if(match) goto found;
        }
    }

    cout << "TIDAK ADA\n";
    return 0;

    found:
    cout << "ADA\n";
    return 0;
}
