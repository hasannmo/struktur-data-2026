#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

void find_primes(int left, int right) {
    bool found = false;
    for(int i = left; i <= right; i++) {
        if(is_prime(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if(!found) cout << "No prime numbers found in the given range.";
}

int main() {
    int left, right;
    cin >> left >> right;

    find_primes(left, right);

    return 0;
}
