#include <bits/stdc++.h>
using namespace std;
#define MAX 5

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1; // stack kosong
    }

    // push
    void push(int x) {
        if (top == MAX - 1) cout << "Stack overflow\n";
        else {
            arr[++top] = x;
            cout << x << " telah ditambahkan ke dalam stack\n";
        }
    }

    // pop
    void pop() {
        if(top == -1) cout << "Stack underflow\n";
        else {
            cout << arr[top--] << " dihapus dari stack\n";
        }
    }

    // top/peek
    void peek() {
        if (top == -1) cout << "Stack kosong\n";
        else cout << "Elemen teratas: " << arr[top] << endl;
    }
};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.peek();
    s.pop();
    s.peek();

    return 0;
}
