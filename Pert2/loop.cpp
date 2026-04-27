#include <bits/stdc++.h>
using namespace std;

int main() {
    int banyak;
    cin>>banyak;

    int row, column, counter = 1;
    for(row=1; row<=banyak; row++){
        for(column=1; column<=row; column++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }


    return 0;
}
